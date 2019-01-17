#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets>
#include "glwidget.h"
#include "penduletab.h"
#include "ressortTab.h"
#include "penduleDoubleTab.h"

/*================================================================================*/


//Widget principale pour interagir

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    MainWindow();


private:
    QTabWidget *onglets;
    QPushButton *startButton;
    GLWidget * w;


signals:
    void updateGl(GLWidget *w);

public slots:

    void newPendTab();
    void newRessTab();
    void newPendDoubleTab();
    void start();
    void stop();
    void state(bool);
    void closeTab(int i);
};

#endif // MAINWINDOW_H
