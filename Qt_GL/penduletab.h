#ifndef PENDULETAB_H
#define PENDULETAB_H

#include <QWidget>
#include "../inc/Pendule.h"
#include "../inc/System.h"
#include "glwidget.h"


namespace Ui {
class PenduleTab;
}

class PenduleTab : public QWidget
{
    Q_OBJECT

public:
    explicit PenduleTab(GLWidget * w, QWidget *parent = 0);
    ~PenduleTab();



private:
    Ui::PenduleTab *ui;
    Pendule* p;


public slots:
    void updateAngle(double d);
    void addToSystem(GLWidget *w);
    void setAngle(int i);
    void setAngle(double i);
    void updateVit(double d);
    void updateMass(double d);
    void updateLa(double d);
    void updateLen(double d);


};

#endif // PENDULETAB_H
