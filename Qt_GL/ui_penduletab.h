/********************************************************************************
** Form generated from reading UI file 'penduletab.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PENDULETAB_H
#define UI_PENDULETAB_H

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

class Ui_PenduleTab
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *angleLabel;
    QDoubleSpinBox *angleSpinBox;
    QDial *angleDial;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *vitLabel;
    QDoubleSpinBox *vitSpinBox;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lenLabel;
    QDoubleSpinBox *lenSpinBox;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *massLabel;
    QDoubleSpinBox *masseSpinBox;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *laLabel;
    QDoubleSpinBox *laSpinBox;

    void setupUi(QWidget *PenduleTab)
    {
        if (PenduleTab->objectName().isEmpty())
            PenduleTab->setObjectName(QString::fromUtf8("PenduleTab"));
        PenduleTab->resize(614, 609);
        verticalLayout = new QVBoxLayout(PenduleTab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(PenduleTab);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        angleLabel = new QLabel(widget);
        angleLabel->setObjectName(QString::fromUtf8("angleLabel"));

        horizontalLayout->addWidget(angleLabel, 0, Qt::AlignLeft);

        angleSpinBox = new QDoubleSpinBox(widget);
        angleSpinBox->setObjectName(QString::fromUtf8("angleSpinBox"));
        angleSpinBox->setMaximum(365);
        angleSpinBox->setSingleStep(0.1);

        horizontalLayout->addWidget(angleSpinBox, 0, Qt::AlignLeft);

        angleDial = new QDial(widget);
        angleDial->setObjectName(QString::fromUtf8("angleDial"));
        angleDial->setMinimumSize(QSize(100, 120));
        angleDial->setMaximum(360);
        angleDial->setInvertedAppearance(true);
        angleDial->setInvertedControls(false);
        angleDial->setWrapping(true);
        angleDial->setNotchTarget(3);
        angleDial->setNotchesVisible(true);

        horizontalLayout->addWidget(angleDial);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(PenduleTab);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        vitLabel = new QLabel(widget_2);
        vitLabel->setObjectName(QString::fromUtf8("vitLabel"));

        horizontalLayout_2->addWidget(vitLabel, 0, Qt::AlignLeft);

        vitSpinBox = new QDoubleSpinBox(widget_2);
        vitSpinBox->setObjectName(QString::fromUtf8("vitSpinBox"));
        vitSpinBox->setAccelerated(true);
        vitSpinBox->setMinimum(-100000);
        vitSpinBox->setMaximum(100000);
        vitSpinBox->setSingleStep(0.1);

        horizontalLayout_2->addWidget(vitSpinBox, 0, Qt::AlignLeft);


        verticalLayout->addWidget(widget_2);

        widget_5 = new QWidget(PenduleTab);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lenLabel = new QLabel(widget_5);
        lenLabel->setObjectName(QString::fromUtf8("lenLabel"));

        horizontalLayout_5->addWidget(lenLabel, 0, Qt::AlignLeft);

        lenSpinBox = new QDoubleSpinBox(widget_5);
        lenSpinBox->setObjectName(QString::fromUtf8("lenSpinBox"));
        lenSpinBox->setAccelerated(true);
        lenSpinBox->setMinimum(-100000);
        lenSpinBox->setMaximum(100000);
        lenSpinBox->setSingleStep(0.1);

        horizontalLayout_5->addWidget(lenSpinBox, 0, Qt::AlignLeft);


        verticalLayout->addWidget(widget_5);

        widget_3 = new QWidget(PenduleTab);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        massLabel = new QLabel(widget_3);
        massLabel->setObjectName(QString::fromUtf8("massLabel"));

        horizontalLayout_3->addWidget(massLabel, 0, Qt::AlignLeft);

        masseSpinBox = new QDoubleSpinBox(widget_3);
        masseSpinBox->setObjectName(QString::fromUtf8("masseSpinBox"));
        masseSpinBox->setAccelerated(true);
        masseSpinBox->setMinimum(-100000);
        masseSpinBox->setMaximum(100000);
        masseSpinBox->setSingleStep(0.1);

        horizontalLayout_3->addWidget(masseSpinBox, 0, Qt::AlignLeft);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(PenduleTab);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        laLabel = new QLabel(widget_4);
        laLabel->setObjectName(QString::fromUtf8("laLabel"));

        horizontalLayout_4->addWidget(laLabel, 0, Qt::AlignLeft);

        laSpinBox = new QDoubleSpinBox(widget_4);
        laSpinBox->setObjectName(QString::fromUtf8("laSpinBox"));
        laSpinBox->setAccelerated(true);
        laSpinBox->setMinimum(-100000);
        laSpinBox->setMaximum(100000);
        laSpinBox->setSingleStep(0.1);

        horizontalLayout_4->addWidget(laSpinBox, 0, Qt::AlignLeft);


        verticalLayout->addWidget(widget_4);


        retranslateUi(PenduleTab);

        QMetaObject::connectSlotsByName(PenduleTab);
    } // setupUi

    void retranslateUi(QWidget *PenduleTab)
    {
        PenduleTab->setWindowTitle(QApplication::translate("PenduleTab", "Form", 0, QApplication::UnicodeUTF8));
        angleLabel->setText(QApplication::translate("PenduleTab", "Angle", 0, QApplication::UnicodeUTF8));
        vitLabel->setText(QApplication::translate("PenduleTab", "Angular velocity", 0, QApplication::UnicodeUTF8));
        lenLabel->setText(QApplication::translate("PenduleTab", "Length", 0, QApplication::UnicodeUTF8));
        massLabel->setText(QApplication::translate("PenduleTab", "Mass", 0, QApplication::UnicodeUTF8));
        laLabel->setText(QApplication::translate("PenduleTab", "Air Viscosity", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PenduleTab: public Ui_PenduleTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PENDULETAB_H
