#include "ressortTab.h"
#include "ui_ressortTab.h"

ressortTab::ressortTab(GLWidget* w, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ressortTab),
    r(new Ressort(w->getVue(),Vecteur({0}),Vecteur({0})))

{
    ui->setupUi(this);

    ui->kSpinBox->setValue(r->getRaideur());
    ui->massSpinBox->setValue(r->getMasse());

    connect(ui->vitSpinBox,SIGNAL(valueChanged(double)),this,SLOT(updateVit(double)));
    connect(ui->massSpinBox,SIGNAL(valueChanged(double)),this,SLOT(updateMass(double)));
    connect(ui->kSpinBox,SIGNAL(valueChanged(double)),this,SLOT(updateK(double)));
    connect(ui->lenSpinBox,SIGNAL(valueChanged(double)),this,SLOT(updateLen(double)));
    connect(ui->laSpinBox,SIGNAL(valueChanged(double)),this,SLOT(updateLa(double)));
}

void ressortTab::updateVit(double d){r->setVit(Vecteur({d}));}

void ressortTab::updateMass(double d){r->setMasse(d);}

void ressortTab::updateK(double d){r->setRaideur(d);}

void ressortTab::updateLen(double d){r->setPara(Vecteur{d});}

void ressortTab::updateLa(double d){r->setViscosite(d);}

void ressortTab::addToSystem(GLWidget *w){
    r->setSupport(w->getVue());
    w->addOscillator(*r);
}

ressortTab::~ressortTab()
{
    delete ui;
    delete r;
}
