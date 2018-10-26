#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <QObject>
#include <QVector>

class Document : public QObject
{
	Q_OBJECT

public:
	explicit Document(QObject *parent = nullptr);
	~Document();

	void setText(const QString& text);
	void setInit(bool);

public slots:
	void receiveText(QString);

signals:
	void sendMsg(const QString& send_text);
	void receiveMsg(const QString &);

private:
	QString _qstrText;
	bool    _bInited;
	QVector<QString> _vecInitData;
};

#endif // DOCUMENT_H
