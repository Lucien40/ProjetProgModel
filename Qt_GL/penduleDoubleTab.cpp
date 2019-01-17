#include "penduleDoubleTab.h"
#include "ui_penduleDoubleTab.h"

PenduleDoubleTab::PenduleDoubleTab(GLWidget *w, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PenduleDoubleTab),
    dp(new PenduleDouble(w->getVue(),Vecteur({0,0}),Vecteur({0,0})))
{
    ui->setupUi(this);

    ui->lenSpinBox->setValue(dp->getLongeur1());
    ui->lenSpinBox_3->setValue(dp->getLongeur2());
    ui->massSpinBox->setValue(dp->getMasse1());
    ui->massSpinBox_2->setValue(dp->getMasse2());

    connect(ui->angleSpinBox,SIGNAL(valueChanged(double)),this,SLOT(setAngle1(double)));
    connect(ui->angleDial,SIGNAL(valueChanged(int)),this,SLOT(setAngle1(int)));
    connect(ui->angleSpinBox_2,SIGNAL(valueChanged(double)),this,SLOT(setAngle2(double)));
    connect(ui->angleDial_2,SIGNAL(valueChanged(int)),this,SLOT(setAngle2(int)));

    connect(ui->lenSpinBox,SIGNAL(valueChanged(double)),this,SLOT(updateLen1(double)));
    connect(ui->lenSpinBox_3,SIGNAL(valueChanged(double)),this,SLOT(updateLen2(double)));

    connect(ui->massSpinBox,SIGNAL(valueChanged(double)),this,SLOT(updateMass1(double)));
    connect(ui->massSpinBox_2,SIGNAL(valueChanged(double)),this,SLOT(updateMass2(double)));

    connect(ui->vitSpinBox,SIGNAL(valueChanged(double)),this,SLOT(updateVit1(double)));
    connect(ui->vitSpinBox_2,SIGNAL(valueChanged(double)),this,SLOT(updateVit2(double)));

}

PenduleDoubleTab::~PenduleDoubleTab()
{
    delete ui;
}

void PenduleDoubleTab::updateAngle2(double d){
    double a((2.0*MPI/360.0) * d);
    double b(dp->getPara().get(0));
    dp->setPara(Vecteur({b,a}));
}

void PenduleDoubleTab::updateAngle1(double d){
    double a((2.0*MPI/360.0) * d);
    double b(dp->getPara().get(1));
    dp->setPara(Vecteur({a,b}));
}


void PenduleDoubleTab::setAngle1(double i){
    ui->angleDial->setValue(i);
    updateAngle1(i);
}

void PenduleDoubleTab::setAngle1(int i){
    ui->angleSpinBox->setValue(i);
}

void PenduleDoubleTab::setAngle2(double i){
    ui->angleDial_2->setValue(i);
    updateAngle2(i);
}

void PenduleDoubleTab::setAngle2(int i){
    ui->angleSpinBox_2->setValue(i);
}


void PenduleDoubleTab::addToSystem(GLWidget *w){
    dp->setSupport(w->getVue());
    w->addOscillator(*dp);
}

void PenduleDoubleTab::updateVit1(double d){
    double b(dp->getPara().get(1));
    dp->setVit(Vecteur({d,b}));
}

void PenduleDoubleTab::updateVit2(double d){
    double b(dp->getPara().get(0));
    dp->setVit(Vecteur({b,d}));
}

void PenduleDoubleTab::updateLen1(double d){dp->setLongeur1(d);}

void PenduleDoubleTab::updateLen2(double d){dp->setLongeur2(d);}

void PenduleDoubleTab::updateMass1(double d){dp->setMass1(d);}

void PenduleDoubleTab::updateMass2(double d){dp->setMass2(d);}
