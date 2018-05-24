#include "mainwindow.h"
using namespace std;

MainWindow::MainWindow():
onglets(new QTabWidget),
startButton(new QPushButton("Start")),
w(new GLWidget){
    QWidget *zoneCentrale = new QWidget;

    QVBoxLayout *vboxglobal = new QVBoxLayout;

    vboxglobal->addWidget(onglets);
    vboxglobal->addWidget(startButton);
    zoneCentrale->setLayout(vboxglobal);

    setCentralWidget(zoneCentrale);

    // Création des menus
    QMenu *menuNew = menuBar()->addMenu("&New");
    QAction *actionPendule = menuNew->addAction("&Pendule");

    connect(actionPendule, SIGNAL(triggered()), this, SLOT(newPendTab()));
    connect(startButton,SIGNAL(pressed()),this,SLOT(start()));
 }


void MainWindow::newPendTab(){

    PenduleTab *Tab = new PenduleTab(w);
    connect(startButton,SIGNAL(pressed()),Tab,SLOT(addToSystem()));
    onglets->addTab(Tab,"Pendule");
    Tab->show();
    onglets->show();

}

void MainWindow::start(){

    for(size_t i(0); i<onglets->count(); i++){

    }
    w->show();

}
