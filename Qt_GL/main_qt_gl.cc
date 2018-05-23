#include <QApplication>
#include <QPushButton>
#include "glwidget.h"

int main(int argc, char* argv[])
{
  QApplication a(argc, argv);
  GLWidget w;
  w.show();

  QPushButton bouton("Salut les Zéros, la forme ?");
  bouton.show();

  return a.exec();
}
