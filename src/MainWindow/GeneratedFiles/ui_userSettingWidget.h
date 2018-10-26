/********************************************************************************
** Form generated from reading UI file 'userSettingWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERSETTINGWIDGET_H
#define UI_USERSETTINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userSettingWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_IP;
    QLabel *label_2;
    QLineEdit *lineEdit_Port;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_11;
    QRadioButton *radioButton_TrueSmooth;
    QLabel *label_10;
    QLineEdit *lineEdit_TImeSpan;
    QLabel *label_3;
    QLineEdit *lineEdit_XRange;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_7;
    QRadioButton *radioButton_FalseSmooth;
    QLineEdit *lineEdit_MaxPointNum;
    QLabel *label_5;
    QLabel *label_20;
    QLineEdit *lineEdit_SCStart;
    QLabel *label_18;
    QLabel *label_;
    QLineEdit *lineEdit_SCLength;
    QLabel *label_22;
    QLabel *label_23;
    QLineEdit *lineEdit_BCStart;
    QLabel *label_24;
    QLabel *label_25;
    QLineEdit *lineEdit_BCLength;
    QLabel *label_26;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_5;
    QLabel *label_19;
    QLineEdit *lineEdit_FilePath;
    QPushButton *pushButton_FilePath;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *lineEdit_BCSpeed;
    QLabel *label_12;
    QLineEdit *lineEdit_SCSpeed;
    QLineEdit *lineEdit_SCPosition;
    QLabel *label_8;
    QLineEdit *lineEdit_BCPosition;
    QLabel *label_9;
    QLineEdit *lineEdit_PFAttitude;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QTextEdit *textEdit_Command;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Accept;
    QPushButton *pushButton_Close;

    void setupUi(QWidget *userSettingWidget)
    {
        if (userSettingWidget->objectName().isEmpty())
            userSettingWidget->setObjectName(QStringLiteral("userSettingWidget"));
        userSettingWidget->resize(496, 561);
        verticalLayout = new QVBoxLayout(userSettingWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(userSettingWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_IP = new QLineEdit(groupBox);
        lineEdit_IP->setObjectName(QStringLiteral("lineEdit_IP"));

        gridLayout->addWidget(lineEdit_IP, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        lineEdit_Port = new QLineEdit(groupBox);
        lineEdit_Port->setObjectName(QStringLiteral("lineEdit_Port"));
        lineEdit_Port->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout->addWidget(lineEdit_Port, 0, 3, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(userSettingWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 0, 6, 1, 1);

        radioButton_TrueSmooth = new QRadioButton(groupBox_2);
        radioButton_TrueSmooth->setObjectName(QStringLiteral("radioButton_TrueSmooth"));
        radioButton_TrueSmooth->setChecked(true);

        gridLayout_2->addWidget(radioButton_TrueSmooth, 0, 1, 1, 1);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_10, 0, 4, 1, 1);

        lineEdit_TImeSpan = new QLineEdit(groupBox_2);
        lineEdit_TImeSpan->setObjectName(QStringLiteral("lineEdit_TImeSpan"));
        lineEdit_TImeSpan->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout_2->addWidget(lineEdit_TImeSpan, 1, 5, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        lineEdit_XRange = new QLineEdit(groupBox_2);
        lineEdit_XRange->setObjectName(QStringLiteral("lineEdit_XRange"));
        lineEdit_XRange->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout_2->addWidget(lineEdit_XRange, 0, 5, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 1, 3, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 1, 6, 1, 1);

        radioButton_FalseSmooth = new QRadioButton(groupBox_2);
        radioButton_FalseSmooth->setObjectName(QStringLiteral("radioButton_FalseSmooth"));

        gridLayout_2->addWidget(radioButton_FalseSmooth, 0, 2, 1, 1);

        lineEdit_MaxPointNum = new QLineEdit(groupBox_2);
        lineEdit_MaxPointNum->setObjectName(QStringLiteral("lineEdit_MaxPointNum"));
        lineEdit_MaxPointNum->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout_2->addWidget(lineEdit_MaxPointNum, 1, 1, 1, 2);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_5, 1, 4, 1, 1);

        label_20 = new QLabel(groupBox_2);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_20, 3, 0, 1, 1);

        lineEdit_SCStart = new QLineEdit(groupBox_2);
        lineEdit_SCStart->setObjectName(QStringLiteral("lineEdit_SCStart"));
        lineEdit_SCStart->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout_2->addWidget(lineEdit_SCStart, 3, 1, 1, 2);

        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_2->addWidget(label_18, 3, 3, 1, 1);

        label_ = new QLabel(groupBox_2);
        label_->setObjectName(QStringLiteral("label_"));
        label_->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_, 3, 4, 1, 1);

        lineEdit_SCLength = new QLineEdit(groupBox_2);
        lineEdit_SCLength->setObjectName(QStringLiteral("lineEdit_SCLength"));
        lineEdit_SCLength->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout_2->addWidget(lineEdit_SCLength, 3, 5, 1, 1);

        label_22 = new QLabel(groupBox_2);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_2->addWidget(label_22, 3, 6, 1, 1);

        label_23 = new QLabel(groupBox_2);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_23, 4, 0, 1, 1);

        lineEdit_BCStart = new QLineEdit(groupBox_2);
        lineEdit_BCStart->setObjectName(QStringLiteral("lineEdit_BCStart"));
        lineEdit_BCStart->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout_2->addWidget(lineEdit_BCStart, 4, 1, 1, 2);

        label_24 = new QLabel(groupBox_2);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout_2->addWidget(label_24, 4, 3, 1, 1);

        label_25 = new QLabel(groupBox_2);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_25, 4, 4, 1, 1);

        lineEdit_BCLength = new QLineEdit(groupBox_2);
        lineEdit_BCLength->setObjectName(QStringLiteral("lineEdit_BCLength"));
        lineEdit_BCLength->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout_2->addWidget(lineEdit_BCLength, 4, 5, 1, 1);

        label_26 = new QLabel(groupBox_2);
        label_26->setObjectName(QStringLiteral("label_26"));

        gridLayout_2->addWidget(label_26, 4, 6, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox_5 = new QGroupBox(userSettingWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout_5 = new QGridLayout(groupBox_5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_19 = new QLabel(groupBox_5);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setLayoutDirection(Qt::LeftToRight);
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_19, 0, 0, 1, 1);

        lineEdit_FilePath = new QLineEdit(groupBox_5);
        lineEdit_FilePath->setObjectName(QStringLiteral("lineEdit_FilePath"));

        gridLayout_5->addWidget(lineEdit_FilePath, 0, 1, 1, 1);

        pushButton_FilePath = new QPushButton(groupBox_5);
        pushButton_FilePath->setObjectName(QStringLiteral("pushButton_FilePath"));

        gridLayout_5->addWidget(pushButton_FilePath, 0, 2, 1, 1);


        verticalLayout->addWidget(groupBox_5);

        groupBox_3 = new QGroupBox(userSettingWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_3->addWidget(label_13, 1, 2, 1, 1);

        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_3->addWidget(label_14, 2, 0, 1, 1);

        lineEdit_BCSpeed = new QLineEdit(groupBox_3);
        lineEdit_BCSpeed->setObjectName(QStringLiteral("lineEdit_BCSpeed"));

        gridLayout_3->addWidget(lineEdit_BCSpeed, 0, 3, 1, 1);

        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_3->addWidget(label_12, 1, 0, 1, 1);

        lineEdit_SCSpeed = new QLineEdit(groupBox_3);
        lineEdit_SCSpeed->setObjectName(QStringLiteral("lineEdit_SCSpeed"));

        gridLayout_3->addWidget(lineEdit_SCSpeed, 1, 3, 1, 1);

        lineEdit_SCPosition = new QLineEdit(groupBox_3);
        lineEdit_SCPosition->setObjectName(QStringLiteral("lineEdit_SCPosition"));

        gridLayout_3->addWidget(lineEdit_SCPosition, 1, 1, 1, 1);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_3->addWidget(label_8, 0, 0, 1, 1);

        lineEdit_BCPosition = new QLineEdit(groupBox_3);
        lineEdit_BCPosition->setObjectName(QStringLiteral("lineEdit_BCPosition"));

        gridLayout_3->addWidget(lineEdit_BCPosition, 0, 1, 1, 1);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_3->addWidget(label_9, 0, 2, 1, 1);

        lineEdit_PFAttitude = new QLineEdit(groupBox_3);
        lineEdit_PFAttitude->setObjectName(QStringLiteral("lineEdit_PFAttitude"));

        gridLayout_3->addWidget(lineEdit_PFAttitude, 2, 1, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(userSettingWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        textEdit_Command = new QTextEdit(groupBox_4);
        textEdit_Command->setObjectName(QStringLiteral("textEdit_Command"));

        gridLayout_4->addWidget(textEdit_Command, 0, 0, 2, 1);


        verticalLayout->addWidget(groupBox_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_Accept = new QPushButton(userSettingWidget);
        pushButton_Accept->setObjectName(QStringLiteral("pushButton_Accept"));

        horizontalLayout->addWidget(pushButton_Accept);

        pushButton_Close = new QPushButton(userSettingWidget);
        pushButton_Close->setObjectName(QStringLiteral("pushButton_Close"));

        horizontalLayout->addWidget(pushButton_Close);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(userSettingWidget);

        QMetaObject::connectSlotsByName(userSettingWidget);
    } // setupUi

    void retranslateUi(QWidget *userSettingWidget)
    {
        userSettingWidget->setWindowTitle(QApplication::translate("userSettingWidget", "\350\256\276\347\275\256", nullptr));
        groupBox->setTitle(QApplication::translate("userSettingWidget", "PLC\350\277\236\346\216\245", nullptr));
        label->setText(QApplication::translate("userSettingWidget", "IP\345\234\260\345\235\200", nullptr));
        label_2->setText(QApplication::translate("userSettingWidget", "\347\253\257\345\217\243\345\217\267", nullptr));
        groupBox_2->setTitle(QApplication::translate("userSettingWidget", "\347\273\230\345\233\276\345\261\236\346\200\247", nullptr));
        label_11->setText(QApplication::translate("userSettingWidget", "s", nullptr));
        radioButton_TrueSmooth->setText(QApplication::translate("userSettingWidget", "\346\230\257", nullptr));
        label_10->setText(QApplication::translate("userSettingWidget", "X\350\275\264\346\227\266\351\227\264\350\267\250\345\272\246", nullptr));
        label_3->setText(QApplication::translate("userSettingWidget", "\346\233\262\347\272\277\345\271\263\346\273\221", nullptr));
        label_6->setText(QApplication::translate("userSettingWidget", "\344\270\252", nullptr));
        label_4->setText(QApplication::translate("userSettingWidget", "\346\233\262\347\272\277\346\234\200\345\244\247\347\202\271\346\225\260", nullptr));
        label_7->setText(QApplication::translate("userSettingWidget", "ms", nullptr));
        radioButton_FalseSmooth->setText(QApplication::translate("userSettingWidget", "\345\220\246", nullptr));
        label_5->setText(QApplication::translate("userSettingWidget", "\350\216\267\345\217\226\346\225\260\346\215\256\351\227\264\351\232\224", nullptr));
        label_20->setText(QApplication::translate("userSettingWidget", "\345\260\217\350\275\246\350\265\267\345\247\213\347\202\271", nullptr));
        label_18->setText(QApplication::translate("userSettingWidget", "m", nullptr));
        label_->setText(QApplication::translate("userSettingWidget", "\345\260\217\350\275\246\350\275\250\351\201\223\351\225\277", nullptr));
        label_22->setText(QApplication::translate("userSettingWidget", "m", nullptr));
        label_23->setText(QApplication::translate("userSettingWidget", "\345\244\247\350\275\246\350\265\267\345\247\213\347\202\271", nullptr));
        label_24->setText(QApplication::translate("userSettingWidget", "m", nullptr));
        label_25->setText(QApplication::translate("userSettingWidget", "\345\244\247\350\275\246\350\275\250\351\201\223\351\225\277", nullptr));
        label_26->setText(QApplication::translate("userSettingWidget", "m", nullptr));
        groupBox_5->setTitle(QApplication::translate("userSettingWidget", "\346\226\207\344\273\266\345\255\230\345\202\250", nullptr));
        label_19->setText(QApplication::translate("userSettingWidget", "\345\255\230\345\202\250\345\234\260\345\235\200", nullptr));
        pushButton_FilePath->setText(QApplication::translate("userSettingWidget", "\351\200\211\346\213\251", nullptr));
        groupBox_3->setTitle(QApplication::translate("userSettingWidget", "\345\257\204\345\255\230\345\231\250\345\234\260\345\235\200", nullptr));
        label_13->setText(QApplication::translate("userSettingWidget", "\345\260\217\350\275\246\351\200\237\345\272\246", nullptr));
        label_14->setText(QApplication::translate("userSettingWidget", "\345\271\263\345\217\260\351\253\230\345\272\246", nullptr));
        label_12->setText(QApplication::translate("userSettingWidget", "\345\260\217\350\275\246\344\275\215\347\275\256", nullptr));
        label_8->setText(QApplication::translate("userSettingWidget", "\345\244\247\350\275\246\344\275\215\347\275\256", nullptr));
        label_9->setText(QApplication::translate("userSettingWidget", "\345\244\247\350\275\246\351\200\237\345\272\246", nullptr));
        groupBox_4->setTitle(QApplication::translate("userSettingWidget", "PLC\345\221\275\344\273\244", nullptr));
        pushButton_Accept->setText(QApplication::translate("userSettingWidget", "\345\272\224\347\224\250", nullptr));
        pushButton_Close->setText(QApplication::translate("userSettingWidget", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userSettingWidget: public Ui_userSettingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERSETTINGWIDGET_H
