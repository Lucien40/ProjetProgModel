#ifndef PENDULEDOUBLETAB_H
#define PENDULEDOUBLETAB_H

#include <QWidget>
#include "../inc/System.h"
#include "glwidget.h"
#include "../inc/PenduleDouble.h"

namespace Ui {
class PenduleDoubleTab;
}

class PenduleDoubleTab : public QWidget
{
    Q_OBJECT

public:
    explicit PenduleDoubleTab(GLWidget* w, QWidget *parent = 0);
    ~PenduleDoubleTab();

private:
    Ui::PenduleDoubleTab *ui;
    PenduleDouble *dp;
    
public slots:
    void updateAngle1(double d);
    void updateAngle2(double d);
    void setAngle1(double d);
    void setAngle1(int d);
    void setAngle2(double d);
    void setAngle2(int d);
    void addToSystem(GLWidget *w);
    void updateVit1(double d);
    void updateVit2(double d);
    void updateMass1(double d);
    void updateMass2(double d);
    void updateLen2(double d);
    void updateLen1(double d);
};

#endif // PENDULEDOUBLETAB_H
