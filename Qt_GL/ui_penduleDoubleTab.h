/********************************************************************************
** Form generated from reading UI file 'penduleDoubleTab.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PENDULEDOUBLETAB_H
#define UI_PENDULEDOUBLETAB_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDial>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PenduleDoubleTab
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *angleLabel;
    QDoubleSpinBox *angleSpinBox;
    QDial *angleDial;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *angleLabel_7;
    QDoubleSpinBox *vitSpinBox;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *angleLabel_3;
    QDoubleSpinBox *lenSpinBox;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *angleLabel_4;
    QDoubleSpinBox *massSpinBox;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *angleLabel_2;
    QDoubleSpinBox *angleSpinBox_2;
    QDial *angleDial_2;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_8;
    QLabel *angleLabel_8;
    QDoubleSpinBox *vitSpinBox_2;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *angleLabel_5;
    QDoubleSpinBox *lenSpinBox_3;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *angleLabel_6;
    QDoubleSpinBox *massSpinBox_2;

    void setupUi(QWidget *PenduleDoubleTab)
    {
        if (PenduleDoubleTab->objectName().isEmpty())
            PenduleDoubleTab->setObjectName(QString::fromUtf8("PenduleDoubleTab"));
        PenduleDoubleTab->resize(490, 578);
        verticalLayout = new QVBoxLayout(PenduleDoubleTab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_2 = new QWidget(PenduleDoubleTab);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        angleLabel = new QLabel(widget_2);
        angleLabel->setObjectName(QString::fromUtf8("angleLabel"));

        horizontalLayout->addWidget(angleLabel, 0, Qt::AlignLeft);

        angleSpinBox = new QDoubleSpinBox(widget_2);
        angleSpinBox->setObjectName(QString::fromUtf8("angleSpinBox"));
        angleSpinBox->setMaximum(365);
        angleSpinBox->setSingleStep(0.1);

        horizontalLayout->addWidget(angleSpinBox, 0, Qt::AlignLeft);

        angleDial = new QDial(widget_2);
        angleDial->setObjectName(QString::fromUtf8("angleDial"));
        angleDial->setMinimumSize(QSize(100, 120));
        angleDial->setMaximum(360);
        angleDial->setInvertedAppearance(true);
        angleDial->setInvertedControls(false);
        angleDial->setWrapping(true);
        angleDial->setNotchTarget(3);
        angleDial->setNotchesVisible(true);

        horizontalLayout->addWidget(angleDial);


        verticalLayout->addWidget(widget_2);

        widget_8 = new QWidget(PenduleDoubleTab);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        horizontalLayout_7 = new QHBoxLayout(widget_8);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        angleLabel_7 = new QLabel(widget_8);
        angleLabel_7->setObjectName(QString::fromUtf8("angleLabel_7"));

        horizontalLayout_7->addWidget(angleLabel_7, 0, Qt::AlignLeft);

        vitSpinBox = new QDoubleSpinBox(widget_8);
        vitSpinBox->setObjectName(QString::fromUtf8("vitSpinBox"));
        vitSpinBox->setMaximum(365);
        vitSpinBox->setSingleStep(0.1);

        horizontalLayout_7->addWidget(vitSpinBox, 0, Qt::AlignLeft);


        verticalLayout->addWidget(widget_8);

        widget_4 = new QWidget(PenduleDoubleTab);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        angleLabel_3 = new QLabel(widget_4);
        angleLabel_3->setObjectName(QString::fromUtf8("angleLabel_3"));

        horizontalLayout_3->addWidget(angleLabel_3, 0, Qt::AlignLeft);

        lenSpinBox = new QDoubleSpinBox(widget_4);
        lenSpinBox->setObjectName(QString::fromUtf8("lenSpinBox"));
        lenSpinBox->setMaximum(365);
        lenSpinBox->setSingleStep(0.1);

        horizontalLayout_3->addWidget(lenSpinBox, 0, Qt::AlignLeft);


        verticalLayout->addWidget(widget_4);

        widget_5 = new QWidget(PenduleDoubleTab);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        angleLabel_4 = new QLabel(widget_5);
        angleLabel_4->setObjectName(QString::fromUtf8("angleLabel_4"));

        horizontalLayout_4->addWidget(angleLabel_4, 0, Qt::AlignLeft);

        massSpinBox = new QDoubleSpinBox(widget_5);
        massSpinBox->setObjectName(QString::fromUtf8("massSpinBox"));
        massSpinBox->setMaximum(365);
        massSpinBox->setSingleStep(0.1);

        horizontalLayout_4->addWidget(massSpinBox, 0, Qt::AlignLeft);


        verticalLayout->addWidget(widget_5);

        widget_3 = new QWidget(PenduleDoubleTab);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        angleLabel_2 = new QLabel(widget_3);
        angleLabel_2->setObjectName(QString::fromUtf8("angleLabel_2"));

        horizontalLayout_2->addWidget(angleLabel_2, 0, Qt::AlignLeft);

        angleSpinBox_2 = new QDoubleSpinBox(widget_3);
        angleSpinBox_2->setObjectName(QString::fromUtf8("angleSpinBox_2"));
        angleSpinBox_2->setMaximum(365);
        angleSpinBox_2->setSingleStep(0.1);

        horizontalLayout_2->addWidget(angleSpinBox_2, 0, Qt::AlignLeft);

        angleDial_2 = new QDial(widget_3);
        angleDial_2->setObjectName(QString::fromUtf8("angleDial_2"));
        angleDial_2->setMinimumSize(QSize(100, 120));
        angleDial_2->setMaximum(360);
        angleDial_2->setInvertedAppearance(true);
        angleDial_2->setInvertedControls(false);
        angleDial_2->setWrapping(true);
        angleDial_2->setNotchTarget(3);
        angleDial_2->setNotchesVisible(true);

        horizontalLayout_2->addWidget(angleDial_2);


        verticalLayout->addWidget(widget_3);

        widget_9 = new QWidget(PenduleDoubleTab);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        horizontalLayout_8 = new QHBoxLayout(widget_9);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        angleLabel_8 = new QLabel(widget_9);
        angleLabel_8->setObjectName(QString::fromUtf8("angleLabel_8"));

        horizontalLayout_8->addWidget(angleLabel_8, 0, Qt::AlignLeft);

        vitSpinBox_2 = new QDoubleSpinBox(widget_9);
        vitSpinBox_2->setObjectName(QString::fromUtf8("vitSpinBox_2"));
        vitSpinBox_2->setMaximum(365);
        vitSpinBox_2->setSingleStep(0.1);

        horizontalLayout_8->addWidget(vitSpinBox_2, 0, Qt::AlignLeft);


        verticalLayout->addWidget(widget_9);

        widget_6 = new QWidget(PenduleDoubleTab);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_5 = new QHBoxLayout(widget_6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        angleLabel_5 = new QLabel(widget_6);
        angleLabel_5->setObjectName(QString::fromUtf8("angleLabel_5"));

        horizontalLayout_5->addWidget(angleLabel_5, 0, Qt::AlignLeft);

        lenSpinBox_3 = new QDoubleSpinBox(widget_6);
        lenSpinBox_3->setObjectName(QString::fromUtf8("lenSpinBox_3"));
        lenSpinBox_3->setMaximum(365);
        lenSpinBox_3->setSingleStep(0.1);

        horizontalLayout_5->addWidget(lenSpinBox_3, 0, Qt::AlignLeft);


        verticalLayout->addWidget(widget_6);

        widget_7 = new QWidget(PenduleDoubleTab);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_6 = new QHBoxLayout(widget_7);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        angleLabel_6 = new QLabel(widget_7);
        angleLabel_6->setObjectName(QString::fromUtf8("angleLabel_6"));

        horizontalLayout_6->addWidget(angleLabel_6, 0, Qt::AlignLeft);

        massSpinBox_2 = new QDoubleSpinBox(widget_7);
        massSpinBox_2->setObjectName(QString::fromUtf8("massSpinBox_2"));
        massSpinBox_2->setMaximum(365);
        massSpinBox_2->setSingleStep(0.1);

        horizontalLayout_6->addWidget(massSpinBox_2, 0, Qt::AlignLeft);


        verticalLayout->addWidget(widget_7);


        retranslateUi(PenduleDoubleTab);

        QMetaObject::connectSlotsByName(PenduleDoubleTab);
    } // setupUi

    void retranslateUi(QWidget *PenduleDoubleTab)
    {
        PenduleDoubleTab->setWindowTitle(QApplication::translate("PenduleDoubleTab", "Form", 0, QApplication::UnicodeUTF8));
        angleLabel->setText(QApplication::translate("PenduleDoubleTab", "Angle 1", 0, QApplication::UnicodeUTF8));
        angleLabel_7->setText(QApplication::translate("PenduleDoubleTab", "Angular Velocity 1", 0, QApplication::UnicodeUTF8));
        angleLabel_3->setText(QApplication::translate("PenduleDoubleTab", "Length 1", 0, QApplication::UnicodeUTF8));
        angleLabel_4->setText(QApplication::translate("PenduleDoubleTab", "Mass 1", 0, QApplication::UnicodeUTF8));
        angleLabel_2->setText(QApplication::translate("PenduleDoubleTab", "Angle 2", 0, QApplication::UnicodeUTF8));
        angleLabel_8->setText(QApplication::translate("PenduleDoubleTab", "Angular Velocity 1", 0, QApplication::UnicodeUTF8));
        angleLabel_5->setText(QApplication::translate("PenduleDoubleTab", "Length 2", 0, QApplication::UnicodeUTF8));
        angleLabel_6->setText(QApplication::translate("PenduleDoubleTab", "Mass 2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PenduleDoubleTab: public Ui_PenduleDoubleTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PENDULEDOUBLETAB_H
