#include "penduletab.h"
#include "ui_penduletab.h"

PenduleTab::PenduleTab(GLWidget* w, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PenduleTab),
    p(new Pendule(w->getVue(),Vecteur({0}),Vecteur({0})))

{
    ui->setupUi(this);

    ui->laSpinBox->setValue(p->getViscosite());
    ui->masseSpinBox->setValue(p->getMasse());
    ui->lenSpinBox->setValue(p->getLongeur());

    connect(ui->angleSpinBox,SIGNAL(valueChanged(double)),this,SLOT(setAngle(double)));
    connect(ui->angleDial,SIGNAL(valueChanged(int)),this,SLOT(setAngle(int)));
    connect(ui->vitSpinBox,SIGNAL(valueChanged(double)),this,SLOT(updateVit(double)));
    connect(ui->masseSpinBox,SIGNAL(valueChanged(double)),this,SLOT(updateMass(double)));
    connect(ui->laSpinBox,SIGNAL(valueChanged(double)),this,SLOT(updateLa(double)));
    connect(ui->lenSpinBox,SIGNAL(valueChanged(double)),this,SLOT(updateLen(double)));

}

PenduleTab::~PenduleTab()
{
    delete ui;
    delete p;
}

void PenduleTab::updateAngle(double d){
    double a((2.0*MPI/360.0) * d);
    p->setPara(Vecteur({a}));
}

void PenduleTab::updateVit(double d){
    p->setVit(Vecteur({d}));
}

void PenduleTab::updateMass(double d){p->setMasse(d);}

void PenduleTab::updateLa(double d){p->setViscosite(d);}

void PenduleTab::updateLen(double d){p->setLongeur(d);}


void PenduleTab::setAngle(double i){
    ui->angleDial->setValue(i);
    updateAngle(i);
}

void PenduleTab::setAngle(int i){
    ui->angleSpinBox->setValue(i);
}

void PenduleTab::addToSystem(GLWidget *w){
    p->setSupport(w->getVue());
    w->addOscillator(*p);
}

