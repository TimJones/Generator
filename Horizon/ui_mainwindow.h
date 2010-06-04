/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri 4. Jun 17:26:53 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "glsurface.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_Settings;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_Iterations;
    QSlider *horizontalSlider_Iterations;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_Variance;
    QSlider *horizontalSlider_Variance;
    QSpacerItem *verticalSpacer_4;
    GLSurface *widget;
    QGroupBox *groupBox_Actions;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_Step;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_Run;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(474, 321);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_Settings = new QGroupBox(centralWidget);
        groupBox_Settings->setObjectName(QString::fromUtf8("groupBox_Settings"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_Settings->sizePolicy().hasHeightForWidth());
        groupBox_Settings->setSizePolicy(sizePolicy);
        groupBox_Settings->setMinimumSize(QSize(150, 0));
        verticalLayout_2 = new QVBoxLayout(groupBox_Settings);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        label_Iterations = new QLabel(groupBox_Settings);
        label_Iterations->setObjectName(QString::fromUtf8("label_Iterations"));

        verticalLayout_2->addWidget(label_Iterations);

        horizontalSlider_Iterations = new QSlider(groupBox_Settings);
        horizontalSlider_Iterations->setObjectName(QString::fromUtf8("horizontalSlider_Iterations"));
        horizontalSlider_Iterations->setEnabled(false);
        horizontalSlider_Iterations->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider_Iterations);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        label_Variance = new QLabel(groupBox_Settings);
        label_Variance->setObjectName(QString::fromUtf8("label_Variance"));

        verticalLayout_2->addWidget(label_Variance);

        horizontalSlider_Variance = new QSlider(groupBox_Settings);
        horizontalSlider_Variance->setObjectName(QString::fromUtf8("horizontalSlider_Variance"));
        horizontalSlider_Variance->setEnabled(false);
        horizontalSlider_Variance->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider_Variance);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);


        gridLayout->addWidget(groupBox_Settings, 0, 0, 1, 1);

        widget = new GLSurface(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(300, 300));

        gridLayout->addWidget(widget, 0, 1, 2, 1);

        groupBox_Actions = new QGroupBox(centralWidget);
        groupBox_Actions->setObjectName(QString::fromUtf8("groupBox_Actions"));
        sizePolicy.setHeightForWidth(groupBox_Actions->sizePolicy().hasHeightForWidth());
        groupBox_Actions->setSizePolicy(sizePolicy);
        groupBox_Actions->setMinimumSize(QSize(150, 0));
        verticalLayout = new QVBoxLayout(groupBox_Actions);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        pushButton_Step = new QPushButton(groupBox_Actions);
        pushButton_Step->setObjectName(QString::fromUtf8("pushButton_Step"));

        verticalLayout->addWidget(pushButton_Step);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        pushButton_Run = new QPushButton(groupBox_Actions);
        pushButton_Run->setObjectName(QString::fromUtf8("pushButton_Run"));
        pushButton_Run->setEnabled(false);

        verticalLayout->addWidget(pushButton_Run);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addWidget(groupBox_Actions, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        groupBox_Settings->setTitle(QApplication::translate("MainWindow", "Settings", 0, QApplication::UnicodeUTF8));
        label_Iterations->setText(QApplication::translate("MainWindow", "Iterations", 0, QApplication::UnicodeUTF8));
        label_Variance->setText(QApplication::translate("MainWindow", "Variance", 0, QApplication::UnicodeUTF8));
        groupBox_Actions->setTitle(QApplication::translate("MainWindow", "Actions", 0, QApplication::UnicodeUTF8));
        pushButton_Step->setText(QApplication::translate("MainWindow", "Step", 0, QApplication::UnicodeUTF8));
        pushButton_Run->setText(QApplication::translate("MainWindow", "Run", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
