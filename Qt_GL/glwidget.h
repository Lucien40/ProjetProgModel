#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QGLWidget>        // Classe pour faire une fenêtre OpenGL
#include <QTime>            // Classe pour gérer le temps
#include "vue_opengl.h"
#include "Pendule.h"
#include "System.h"

/*-----------------------------------------------------------------*/

class GLWidget : public QGLWidget
/* La fenêtre hérite de QGLWidget ;
 * les événements (clavier, souris, temps) sont des méthodes virtuelles à redéfinir.
 */
{
public:
    GLWidget(QWidget* parent = nullptr)
        : QGLWidget(parent)
        , system(&vue)
    {setMouseTracking(true);}

    virtual ~GLWidget() {}

/*-----------------------------------------------------------------*/

    void addOscillator(Oscillateur &o);
    VueOpenGL* getVue() ;

private:
    // Les 3 méthodes clés de la classe QGLWidget à réimplémenter
    virtual void initializeGL()                  override;
    virtual void resizeGL(int width, int height) override;
    virtual void paintGL()                       override;

    // Méthodes de gestion d'évènements
    virtual void keyPressEvent(QKeyEvent* event) override;
    virtual void mousePressEvent(QMouseEvent* event) override;
    virtual void mouseMoveEvent(QMouseEvent* event)  override;
    virtual void timerEvent(QTimerEvent* event)  override;

    // Méthodes de gestion internes
    void pause();

    // Vue : ce qu'il faut donner au contenu pour qu'il puisse se dessiner sur la vue
    VueOpenGL vue;

    // Timer
    int timerId;

    // pour faire évoluer les objets avec le bon "dt"
    QTime chronometre;

    //Pour souris:

    QPoint lastMousePosition;

    // objets à dessiner, faire évoluer

    System system;

 };

 #endif // GLWIDGET_H
