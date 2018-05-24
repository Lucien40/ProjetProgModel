#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets>
#include "glwidget.h"
#include "penduletab.h"


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

public slots:

    void newPendTab();
    void start();
};

#endif // MAINWINDOW_H
