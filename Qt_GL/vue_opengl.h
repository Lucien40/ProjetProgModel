#ifndef VUEOPENGL_H
#define VUEOPENGL_H

#include <QOpenGLShaderProgram> // Classe qui regroupe les fonctions OpenGL liées aux shaders
#include <QMatrix4x4>
#include "GLSphere.h"
#include "System.h"
#include "oscillateurs.h"

class VueOpenGL : public SupportADessin {
 public:
  // méthode(s) de dessin (héritée(s) de SupportADessin)

  virtual void dessine(Pendule const& a_dessiner) override;

  virtual void dessine(Ressort const &a_dessiner) override;

  virtual void dessine(System const &a_dessiner) override;

  virtual void dessine(Oscillateur const &a_dessiner) override;

  virtual void dessine(ChariotPenduleRessort const& aDessiner) override;

  virtual void dessine(PenduleDouble const& aDessiner) override;

  void dessineAxes();

  // méthodes de (ré-)initialisation
  void init();
  void initializePosition();

  // méthode set
  void setProjection(QMatrix4x4 const& projection)
  { prog.setUniformValue("projection", projection); }

  // Méthodes set
  void translate(double x, double y, double z);
  void rotate(double angle, double dir_x, double dir_y, double dir_z);
  
  // méthode utilitaire offerte pour simplifier
  void dessineCube(QMatrix4x4 const& point_de_vue = QMatrix4x4() );
  void dessineLine(Vecteur origine, Vecteur pos, QMatrix4x4 const& point_de_vue = QMatrix4x4(),double r =1.0,double g=1.0, double b =1.0);
  void dessineSphere(QMatrix4x4 const& point_de_vue,
                       double rouge = 1.0, double vert = 1.0, double bleu = 1.0);

 private:
  // Un shader OpenGL encapsulé dans une classe Qt
  QOpenGLShaderProgram prog;
  GLSphere sphere;

  // Caméra
  QMatrix4x4 matrice_vue;
};

#endif
