#include <QApplication>
#include <QPushButton>
#include "mainwindow.h"

int main(int argc, char* argv[])
{
  QApplication a(argc, argv);


  //GLWidget w;



  //QPushButton bouton("Salut les Zéros, la forme ?",&fenetre);
  //w.show();

  MainWindow m;
  m.show();

  return a.exec();
}
