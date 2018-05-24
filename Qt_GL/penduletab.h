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
    GLWidget* w;

public slots:
    void updateAngle(double d);
    void addToSystem();



};

#endif // PENDULETAB_H
