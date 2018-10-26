#include "MainWindow.h"
#include <QtCharts/QChart>
#include <QEasingCurve>

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	_chart = new QChart;
	_chartView = new QChartView;

	_chartView->setChart(_chart);

	_iNum = 0;

	_lSeries = new QLineSeries;
	_lSeries->setName("1");
	_lSeries->setUseOpenGL(true);

	QHBoxLayout * hBox1 = new QHBoxLayout;
	hBox1->addWidget(_chartView);
	ui.widget->setLayout(hBox1);

	//_lSeries->append(QPointF(1, 1));
	//_lSeries->append(QPointF(2, 2));
	//_lSeries->append(QPointF(3, 3));
	//_lSeries->append(QPointF(4, 5));
	//_lSeries->append(QPointF(5, 6));
	//_lSeries->append(QPointF(6, 8));


	_chart->addSeries(_lSeries);
	_chart->createDefaultAxes();

	_timer = new QTimer(this);
	connect(_timer, SIGNAL(timeout()), this, SLOT(addPointToChart()));

	connect(ui.pushButton_Start, SIGNAL(clicked()), this, SLOT(startPlay()));
}

MainWindow::~MainWindow()
{
	
}

bool MainWindow::getRangeFromVec(const QVector<QPointF>& vec, int iStartIndex, int iLength, float& fMax, float& fMin)
{
	QPointF ptMax;
	QPointF ptMin;
	if (getRangeFromVec(vec, iStartIndex, iLength, ptMax, ptMin) != false)
	{
		fMax = ptMax.y();
		fMin = ptMin.y();
		return true;
	}
	else
	{
		return false;
	}
}

bool MainWindow::getRangeFromVec(const QVector<QPointF>& vec, int iStartIndex, int iLength, QPointF& ptMax, QPointF& ptMin)
{
	if (iStartIndex > vec.size() - 1)
	{
		return false;
	}

	if (vec.size() == 0)
	{
		return false;
	}

	if (iStartIndex < 0)
	{
		iStartIndex = 0;
	}

	if ((iStartIndex + iLength) > vec.size())
	{
		iLength = vec.size() - iStartIndex;
	}

	ptMax = ptMin = vec[iStartIndex];

	for (size_t i = iStartIndex; i < iStartIndex + iLength; i++)
	{
		QPointF pt = vec[i];
		float y = pt.y();
		if (y > ptMax.y())
		{
			ptMax = pt;
		}
		else if(y < ptMin.y())
		{
			ptMin = pt;
		}
	}

	return true;
}

bool MainWindow::getRangeFromVec(const QVector<QPointF>& vec, float& fMax, float& fMin)
{
	if (getRangeFromVec(vec, 0, vec.size(), fMax, fMin) != false)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

bool MainWindow::getRangeFromVec(const QVector<QPointF>& vec, QPointF& ptMax, QPointF& ptMin)
{
	if (getRangeFromVec(vec, 0, vec.size(), ptMax, ptMin) != false)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void MainWindow::addPointToChart()
{
	QPointF po(_iNum, rand() % 100);
	_lSeries->append(po);
	_iNum++;

	_chart->axisX(_lSeries)->setRange(_iNum - 60, _iNum);
	QPointF ptMax;
	QPointF ptMin;
	if (getRangeFromVec(_lSeries->pointsVector(), _iNum - 60, 60, ptMax, ptMin))
	{
		float blankLength = (ptMax.y() - ptMin.y())*0.2;
		_chart->axisY(_lSeries)->setRange(ptMin.y() - blankLength, ptMax.y() + blankLength);
	}

	//qDebug() << po;
}

void MainWindow::startPlay()
{
	int iTimeSpan = ui.lineEdit_TimeSpan->text().toInt();
	if (_timer->isActive())
	{
		_timer->stop();
	}
	else
	{
		_timer->start(iTimeSpan);
	}
}
