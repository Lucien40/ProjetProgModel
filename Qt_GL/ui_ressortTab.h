/********************************************************************************
** Form generated from reading UI file 'ressortTab.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESSORTTAB_H
#define UI_RESSORTTAB_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ressortTab
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *massLabel_4;
    QDoubleSpinBox *lenSpinBox;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *massLabel_5;
    QDoubleSpinBox *vitSpinBox;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *massLabel_6;
    QDoubleSpinBox *massSpinBox;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *massLabel;
    QDoubleSpinBox *kSpinBox;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *massLabel_2;
    QDoubleSpinBox *laSpinBox;

    void setupUi(QWidget *ressortTab)
    {
        if (ressortTab->objectName().isEmpty())
            ressortTab->setObjectName(QString::fromUtf8("ressortTab"));
        ressortTab->resize(712, 556);
        verticalLayout = new QVBoxLayout(ressortTab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_6 = new QWidget(ressortTab);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        massLabel_4 = new QLabel(widget_6);
        massLabel_4->setObjectName(QString::fromUtf8("massLabel_4"));

        horizontalLayout_6->addWidget(massLabel_4, 0, Qt::AlignLeft);

        lenSpinBox = new QDoubleSpinBox(widget_6);
        lenSpinBox->setObjectName(QString::fromUtf8("lenSpinBox"));
        lenSpinBox->setAccelerated(true);
        lenSpinBox->setMinimum(-100000);
        lenSpinBox->setMaximum(100000);
        lenSpinBox->setSingleStep(0.1);

        horizontalLayout_6->addWidget(lenSpinBox, 0, Qt::AlignLeft);


        verticalLayout->addWidget(widget_6);

        widget_7 = new QWidget(ressortTab);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_7 = new QHBoxLayout(widget_7);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        massLabel_5 = new QLabel(widget_7);
        massLabel_5->setObjectName(QString::fromUtf8("massLabel_5"));

        horizontalLayout_7->addWidget(massLabel_5, 0, Qt::AlignLeft);

        vitSpinBox = new QDoubleSpinBox(widget_7);
        vitSpinBox->setObjectName(QString::fromUtf8("vitSpinBox"));
        vitSpinBox->setAccelerated(true);
        vitSpinBox->setMinimum(-100000);
        vitSpinBox->setMaximum(100000);
        vitSpinBox->setSingleStep(0.1);

        horizontalLayout_7->addWidget(vitSpinBox, 0, Qt::AlignLeft);


        verticalLayout->addWidget(widget_7);

        widget_8 = new QWidget(ressortTab);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        horizontalLayout_8 = new QHBoxLayout(widget_8);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        massLabel_6 = new QLabel(widget_8);
        massLabel_6->setObjectName(QString::fromUtf8("massLabel_6"));

        horizontalLayout_8->addWidget(massLabel_6, 0, Qt::AlignLeft);

        massSpinBox = new QDoubleSpinBox(widget_8);
        massSpinBox->setObjectName(QString::fromUtf8("massSpinBox"));
        massSpinBox->setAccelerated(true);
        massSpinBox->setMinimum(-100000);
        massSpinBox->setMaximum(100000);
        massSpinBox->setSingleStep(0.1);

        horizontalLayout_8->addWidget(massSpinBox, 0, Qt::AlignLeft);


        verticalLayout->addWidget(widget_8);

        widget_3 = new QWidget(ressortTab);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        massLabel = new QLabel(widget_3);
        massLabel->setObjectName(QString::fromUtf8("massLabel"));

        horizontalLayout_3->addWidget(massLabel, 0, Qt::AlignLeft);

        kSpinBox = new QDoubleSpinBox(widget_3);
        kSpinBox->setObjectName(QString::fromUtf8("kSpinBox"));
        kSpinBox->setAccelerated(true);
        kSpinBox->setMinimum(-100000);
        kSpinBox->setMaximum(100000);
        kSpinBox->setSingleStep(0.1);

        horizontalLayout_3->addWidget(kSpinBox, 0, Qt::AlignLeft);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(ressortTab);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        massLabel_2 = new QLabel(widget_4);
        massLabel_2->setObjectName(QString::fromUtf8("massLabel_2"));

        horizontalLayout_4->addWidget(massLabel_2, 0, Qt::AlignLeft);

        laSpinBox = new QDoubleSpinBox(widget_4);
        laSpinBox->setObjectName(QString::fromUtf8("laSpinBox"));
        laSpinBox->setAccelerated(true);
        laSpinBox->setMinimum(-100000);
        laSpinBox->setMaximum(100000);
        laSpinBox->setSingleStep(0.1);

        horizontalLayout_4->addWidget(laSpinBox, 0, Qt::AlignLeft);


        verticalLayout->addWidget(widget_4);


        retranslateUi(ressortTab);

        QMetaObject::connectSlotsByName(ressortTab);
    } // setupUi

    void retranslateUi(QWidget *ressortTab)
    {
        ressortTab->setWindowTitle(QApplication::translate("ressortTab", "Form", 0, QApplication::UnicodeUTF8));
        massLabel_4->setText(QApplication::translate("ressortTab", "Length", 0, QApplication::UnicodeUTF8));
        massLabel_5->setText(QApplication::translate("ressortTab", "Initial velocity", 0, QApplication::UnicodeUTF8));
        massLabel_6->setText(QApplication::translate("ressortTab", "Mass", 0, QApplication::UnicodeUTF8));
        massLabel->setText(QApplication::translate("ressortTab", "Spring constant", 0, QApplication::UnicodeUTF8));
        massLabel_2->setText(QApplication::translate("ressortTab", "Viscosity", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ressortTab: public Ui_ressortTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESSORTTAB_H
