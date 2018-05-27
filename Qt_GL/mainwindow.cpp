#include "mainwindow.h"
using namespace std;

MainWindow::MainWindow():
    onglets(new QTabWidget),
    startButton(new QPushButton("St&art")),
    w(new GLWidget)
{
    QWidget *zoneCentrale = new QWidget;
    QVBoxLayout *vboxglobal = new QVBoxLayout;

    vboxglobal->addWidget(onglets);
    vboxglobal->addWidget(startButton);

    zoneCentrale->setLayout(vboxglobal);

    onglets->setTabsClosable(true);

    connect(onglets,SIGNAL(tabCloseRequested(int)),this,SLOT(closeTab(int)));

    setCentralWidget(zoneCentrale);
    startButton->setCheckable(true);

    // Création des menus
    QMenu *menuNew = menuBar()->addMenu("&New");
    QAction *actionPendule = menuNew->addAction("&Pendule");
    QAction *actionDPendule = menuNew->addAction("&Double Pendule");
    QAction *actionRessort = menuNew->addAction("&Ressort");

    connect(actionRessort,SIGNAL(triggered(bool)),this,SLOT(newRessTab()));
    connect(actionPendule, SIGNAL(triggered()), this, SLOT(newPendTab()));
    connect(actionDPendule, SIGNAL(triggered()), this, SLOT(newPendDoubleTab()));
    connect(startButton,SIGNAL(toggled(bool)),this,SLOT(state(bool)));

 }

void MainWindow::newRessTab(){
    ressortTab *Tab = new ressortTab(w);
    connect(this,SIGNAL(updateGl(GLWidget*)),Tab,SLOT(addToSystem(GLWidget*)));
    onglets->addTab(Tab,"Ressort");
    onglets->show();
}


void MainWindow::newPendTab(){

    PenduleTab *Tab = new PenduleTab(w);
    connect(this,SIGNAL(updateGl(GLWidget*)),Tab,SLOT(addToSystem(GLWidget*)));
    onglets->addTab(Tab,"Pendule");
    onglets->show();

}

void MainWindow::newPendDoubleTab(){

    PenduleDoubleTab *Tab = new PenduleDoubleTab(w);
    connect(this,SIGNAL(updateGl(GLWidget*)),Tab,SLOT(addToSystem(GLWidget*)));
    onglets->addTab(Tab,"Double Pendule");
    onglets->show();

}

void MainWindow::start(){
    emit updateGl(w);
    startButton->setText("St&op");
    w->show();
}

void MainWindow::stop(){
    w->close();
    w = new GLWidget;
    startButton->setText("St&art");
}

void MainWindow::state(bool b){
    if(b){start();}
    else{stop();}
}

void MainWindow::closeTab(int i){
    delete onglets->widget(i);
}
