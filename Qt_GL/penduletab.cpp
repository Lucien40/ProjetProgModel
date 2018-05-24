#include "penduletab.h"
#include "ui_penduletab.h"

PenduleTab::PenduleTab(GLWidget* w, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PenduleTab),
    w(w),
    p(new Pendule(w->getVue(),Vecteur({0}),Vecteur({0})))

{
    ui->setupUi(this);\
    connect(ui->AngleSpinBox,SIGNAL(valueChanged(double)),this,SLOT(updateAngle(double)));
}

PenduleTab::~PenduleTab()
{
    delete ui;
    delete p;
}


void PenduleTab::updateAngle(double d){
    p->setPara(Vecteur({d}));;
}

void PenduleTab::addToSystem(){
    w->addOscillator(*p);
}
