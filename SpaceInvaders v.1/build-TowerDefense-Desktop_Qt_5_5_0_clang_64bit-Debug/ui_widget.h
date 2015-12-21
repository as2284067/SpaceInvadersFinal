/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioEasy;
    QRadioButton *radioMed;
    QRadioButton *radioHard;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *startButton;
    QPushButton *settingButton;
    QPushButton *exitButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(500, 360);
        Widget->setMinimumSize(QSize(500, 360));
        Widget->setMaximumSize(QSize(500, 360));
        Widget->setContextMenuPolicy(Qt::PreventContextMenu);
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 10, 101, 31));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setCursor(QCursor(Qt::ArrowCursor));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(180, 60, 131, 91));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        radioEasy = new QRadioButton(groupBox);
        radioEasy->setObjectName(QStringLiteral("radioEasy"));

        verticalLayout->addWidget(radioEasy);

        radioMed = new QRadioButton(groupBox);
        radioMed->setObjectName(QStringLiteral("radioMed"));

        verticalLayout->addWidget(radioMed);

        radioHard = new QRadioButton(groupBox);
        radioHard->setObjectName(QStringLiteral("radioHard"));

        verticalLayout->addWidget(radioHard);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(170, 180, 151, 151));
        groupBox_2->setMinimumSize(QSize(0, 40));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        startButton = new QPushButton(groupBox_2);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setMinimumSize(QSize(100, 45));
        QFont font1;
        font1.setPointSize(18);
        startButton->setFont(font1);

        verticalLayout_2->addWidget(startButton);

        settingButton = new QPushButton(groupBox_2);
        settingButton->setObjectName(QStringLiteral("settingButton"));

        verticalLayout_2->addWidget(settingButton);

        exitButton = new QPushButton(groupBox_2);
        exitButton->setObjectName(QStringLiteral("exitButton"));

        verticalLayout_2->addWidget(exitButton);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        label->setText(QApplication::translate("Widget", "Tower Defense", 0));
        groupBox->setTitle(QString());
        radioEasy->setText(QApplication::translate("Widget", "Easy", 0));
        radioMed->setText(QApplication::translate("Widget", "Medium", 0));
        radioHard->setText(QApplication::translate("Widget", "Hard", 0));
        groupBox_2->setTitle(QString());
        startButton->setText(QApplication::translate("Widget", "Start", 0));
        settingButton->setText(QApplication::translate("Widget", "Settings", 0));
        exitButton->setText(QApplication::translate("Widget", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
