/********************************************************************************
** Form generated from reading UI file 'myAbout.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYABOUT_H
#define UI_MYABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myAbout
{
public:
    QGridLayout *gridLayout;
    QLabel *label_9;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_5;

    void setupUi(QWidget *myAbout)
    {
        if (myAbout->objectName().isEmpty())
            myAbout->setObjectName(QStringLiteral("myAbout"));
        myAbout->resize(550, 333);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(myAbout->sizePolicy().hasHeightForWidth());
        myAbout->setSizePolicy(sizePolicy);
        myAbout->setMinimumSize(QSize(550, 300));
        gridLayout = new QGridLayout(myAbout);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(myAbout);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_9->setMargin(10);

        gridLayout->addWidget(label_9, 0, 1, 1, 1);

        label_2 = new QLabel(myAbout);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font.setPointSize(11);
        label_2->setFont(font);
        label_2->setWordWrap(true);
        label_2->setMargin(10);

        gridLayout->addWidget(label_2, 2, 1, 1, 2);

        label_3 = new QLabel(myAbout);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(150, 50));
        label_3->setStyleSheet(QLatin1String("background-image: url(:/Resources/Icon_Dialog_Beijing.png);\n"
"background-position:center;\n"
"background-repeat:no-repeat;"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        label_6 = new QLabel(myAbout);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        label_6->setFont(font1);
        label_6->setStyleSheet(QStringLiteral(""));
        label_6->setMargin(10);

        gridLayout->addWidget(label_6, 3, 1, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(4, 0, 10, 10);
        label_8 = new QLabel(myAbout);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setMinimumSize(QSize(15, 15));
        label_8->setStyleSheet(QLatin1String("background-image: url(:/Resources/CopyRight.png);\n"
"background-position:center;\n"
"background-repeat:no-repeat;"));
        label_8->setMargin(0);

        horizontalLayout->addWidget(label_8);

        label_7 = new QLabel(myAbout);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);
        label_7->setMargin(0);

        horizontalLayout->addWidget(label_7);


        gridLayout->addLayout(horizontalLayout, 4, 1, 1, 2);

        label = new QLabel(myAbout);
        label->setObjectName(QStringLiteral("label"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(12);
        label->setFont(font2);
        label->setStyleSheet(QStringLiteral("border-top:1px solid #ddd;"));
        label->setMargin(10);

        gridLayout->addWidget(label, 1, 1, 1, 2);

        label_5 = new QLabel(myAbout);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font3;
        font3.setFamily(QStringLiteral("Stencil Std"));
        font3.setBold(true);
        font3.setWeight(75);
        label_5->setFont(font3);
        label_5->setStyleSheet(QLatin1String("background-image: url(:/Resources/NetSite_Default.png);\n"
"background-color: rgb(100, 100, 100);\n"
"background-position:center;\n"
"background-repeat:no-repeat;"));
        label_5->setIndent(-1);
        label_5->setOpenExternalLinks(false);

        gridLayout->addWidget(label_5, 0, 0, 5, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 2);
        gridLayout->setColumnStretch(2, 2);

        retranslateUi(myAbout);

        QMetaObject::connectSlotsByName(myAbout);
    } // setupUi

    void retranslateUi(QWidget *myAbout)
    {
        myAbout->setWindowTitle(QApplication::translate("myAbout", "\345\205\263\344\272\216", nullptr));
        label_9->setText(QApplication::translate("myAbout", "V1.0", nullptr));
        label_2->setText(QApplication::translate("myAbout", "        \345\260\232\346\260\264\350\202\241\344\273\275\357\274\210\350\257\201\345\210\270\344\273\243\347\240\201430080\357\274\211\346\230\257\344\270\200\345\256\266\346\272\220\350\207\252\346\270\205\345\215\216\347\224\261\342\200\234\345\215\203\344\272\272\350\256\241\345\210\222\342\200\235\343\200\201\342\200\234\346\265\267\350\201\232\345\267\245\347\250\213\342\200\235\347\211\271\350\201\230\344\270\223\345\256\266\345\210\233\345\212\236\347\232\204\346\265\267\345\275\222\344\274\201\344\270\232\343\200\201\345\233\275\345\256\266\347\272\247\351\253\230\346\226\260\346\212\200\346\234\257\345\222\214\345\217\214\350\275\257\350\256\244\350\257\201\344\274\201\344\270\232\357\274\214\345\205\254\345\217\270\345\220\214\346\227\266\346\213\245\346\234\211\344\277\241\346\201\257\347\263\273\347\273\237\351\233\206\346\210\220\343\200\201\346\260\264\346\226\207\346\260\264\350\265\204\346\272\220\350\260\203\346\237\245\350\257\204\344\273\267\347\255\211\350\265\204\350\264\250\357\274\214\344"
                        "\270\272\346\260\264\345\210\251\343\200\201\346\260\264\350\277\220\343\200\201\347\216\257\344\277\235\350\241\214\344\270\232\345\256\242\346\210\267\346\217\220\344\276\233\344\270\223\344\270\232\347\232\204\344\272\247\345\223\201\345\222\214\346\234\215\345\212\241\343\200\202", nullptr));
        label_3->setText(QString());
        label_6->setText(QApplication::translate("myAbout", "\345\214\227\344\272\254\345\260\232\346\260\264\344\277\241\346\201\257\346\212\200\346\234\257\350\202\241\344\273\275\346\234\211\351\231\220\345\205\254\345\217\270", nullptr));
        label_8->setText(QString());
        label_7->setText(QApplication::translate("myAbout", "CopyRight 2003-2018 Sinfotek All Rights Reserved.", nullptr));
        label->setText(QApplication::translate("myAbout", "\350\277\220\345\212\250\346\225\260\346\215\256\345\261\225\347\244\272\345\267\245\345\205\267", nullptr));
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class myAbout: public Ui_myAbout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYABOUT_H
