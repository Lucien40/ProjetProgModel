#ifndef RESSORTTAB_H
#define RESSORTTAB_H

#include <QWidget>
#include "../inc/Pendule.h"
#include "../inc/System.h"
#include "glwidget.h"

namespace Ui {
class ressortTab;
}

class ressortTab : public QWidget
{
    Q_OBJECT

public:
    explicit ressortTab(GLWidget* w,QWidget *parent = 0);
    ~ressortTab();

private:

    Ui::ressortTab *ui;
    Ressort* r;
public slots:
    void addToSystem(GLWidget *w);
    void updateVit(double d);
    void updateMass(double d);
    void updateK(double d);
    void updateLen(double d);
    void updateLa(double d);
    
};

#endif // RESSORTTAB_H
