#include "vue_opengl.h"
#include "vertex_shader.h" // Identifiants Qt de nos différents attributs
#include "Pendule.h"

// ======================================================================
void VueOpenGL::dessine(Pendule const& a_dessiner)
{

  QMatrix4x4 matrice;
  matrice.setToIdentity();
  matrice.translate(a_dessiner.getPosition().get(0),a_dessiner.getPosition().get(1),a_dessiner.getPosition().get(2));
  dessineCube(matrice);

  matrice.setToIdentity();
  dessineLine(a_dessiner.getOrigine(),a_dessiner.getPosition(),matrice);
}


void VueOpenGL::dessine(const ChariotPenduleRessort &a_dessiner){
    QMatrix4x4 matrice;
   matrice.setToIdentity();
    matrice.translate(a_dessiner.getPositionChariot().get(0),a_dessiner.getPositionChariot().get(1),a_dessiner.getPositionChariot().get(2));
    dessineCube(matrice);

    matrice.setToIdentity();
    matrice.translate(a_dessiner.getPositionPendule().get(0),a_dessiner.getPositionPendule().get(1),a_dessiner.getPositionPendule().get(2));
    dessineCube(matrice);

    matrice.setToIdentity();
    dessineLine(a_dessiner.getOrigine(),a_dessiner.getPositionChariot(),matrice);

    matrice.setToIdentity();
    dessineLine(a_dessiner.getPositionPendule(),a_dessiner.getPositionChariot(),matrice);
}

void VueOpenGL::dessine(const PenduleDouble &a_dessiner){
    QMatrix4x4 matrice;
   matrice.setToIdentity();
    matrice.translate(a_dessiner.getPositionM1().get(0),a_dessiner.getPositionM1().get(1),a_dessiner.getPositionM1().get(2));
    dessineCube(matrice);

    matrice.setToIdentity();
    matrice.translate(a_dessiner.getPositionM2().get(0),a_dessiner.getPositionM2().get(1),a_dessiner.getPositionM2().get(2));
    dessineCube(matrice);

    matrice.setToIdentity();
    dessineLine(a_dessiner.getOrigine(),a_dessiner.getPositionM1(),matrice);

    matrice.setToIdentity();
    dessineLine(a_dessiner.getPositionM2(),a_dessiner.getPositionM1(),matrice);
}

void VueOpenGL::dessine(Ressort const &aDessiner) {
    //flot << "Ressort:" << '\n';

    //flot << "Parametre (longeur): " << aDessiner.getPara() << '\n';
    //flot << "Vitesse          : " << aDessiner.getVit() << '\n';
    //flot << "Viscosite        : " << aDessiner.getViscosite() << '\n';
    //flot << "Masse            : " << aDessiner.getMasse() << '\n';
    //flot << "Raideur          : " << aDessiner.getRaideur() << '\n';
    //flot << "-------------------------" << '\n';

}

void VueOpenGL::dessine(System const &aDessiner) {
    //flot << "Syteme: " << '\n';
    for (auto &o : aDessiner.contenu) {
        o->dessine();
    }
}

void VueOpenGL::dessine(Oscillateur const &aDessiner) {
    //aDessiner.affiche(flot);
    //flot << "-------------------------" << '\n';
}

// ======================================================================
void VueOpenGL::init()
{
  /* Initialise notre vue OpenGL.
   * Dans cet exemple, nous créons et activons notre shader.
   *
   * En raison du contenu des fichiers *.glsl, le shader de cet exemple
   * NE permet QUE de dessiner des primitives colorées
   * (pas de textures, brouillard, reflets de la lumière ou autres).
   *
   * Il est séparé en deux parties VERTEX et FRAGMENT.
   * Le VERTEX :
   * - récupère pour chaque sommet des primitives de couleur (dans
   *     l'attribut couleur) et de position (dans l'attribut sommet)
   * - multiplie l'attribut sommet par les matrices 'vue_modele' et
   *     'projection' et donne le résultat à OpenGL
   *   - passe la couleur au shader FRAGMENT.
   *
   * Le FRAGMENT :
   *   - applique la couleur qu'on lui donne
   */

  prog.addShaderFromSourceFile(QGLShader::Vertex,   ":/vertex_shader.glsl");
  prog.addShaderFromSourceFile(QGLShader::Fragment, ":/fragment_shader.glsl");

  /* Identifie les deux attributs du shader de cet exemple
   * (voir vertex_shader.glsl).
   *
   * L'attribut identifié par 0 est particulier, il permet d'envoyer un
   * nouveau "point" à OpenGL
   *
   * C'est pourquoi il devra obligatoirement être spécifié et en dernier
   * (après la couleur dans cet exemple, voir plus bas).
   */

  prog.bindAttributeLocation("sommet",  SommetId);
  prog.bindAttributeLocation("couleur", CouleurId);

  // Compilation du shader OpenGL
  prog.link();

  // Activation du shader
  prog.bind();

  /* Activation du "Test de profondeur" et du "Back-face culling"
   * Le Test de profondeur permet de dessiner un objet à l'arrière-plan
   * partielement caché par d'autres objets.
   *
   * Le Back-face culling consiste à ne dessiner que les face avec ordre
   * de déclaration dans le sens trigonométrique.
   */
  glEnable(GL_DEPTH_TEST);
  glEnable(GL_CULL_FACE);

  initializePosition();
}

// ======================================================================
void VueOpenGL::initializePosition()
{
  // position initiale
  matrice_vue.setToIdentity();
  matrice_vue.translate(0.0, 0.0, -20.0);
  matrice_vue.rotate(90.0, 1.0, 0.0, 0.0);
  //matrice_vue.rotate(90.0, 1.0, 0.0, 0.0);
  //matrice_vue.rotate(45.0, 0.0, 0.0, 1.0);
}

// ======================================================================
void VueOpenGL::translate(double x, double y, double z)
{
  /* Multiplie la matrice de vue par LA GAUCHE.
   * Cela fait en sorte que la dernière modification apportée
   * à la matrice soit appliquée en dernier (composition de fonctions).
   */
  QMatrix4x4 translation_supplementaire;
  translation_supplementaire.translate(x, y, z);
  matrice_vue = translation_supplementaire * matrice_vue;
}

// ======================================================================
void VueOpenGL::rotate(double angle, double dir_x, double dir_y, double dir_z)
{
  // Multiplie la matrice de vue par LA GAUCHE
  QMatrix4x4 rotation_supplementaire;
  rotation_supplementaire.rotate(angle, dir_x, dir_y, dir_z);
  matrice_vue = rotation_supplementaire * matrice_vue;
}

// ======================================================================
void VueOpenGL::dessineCube (QMatrix4x4 const& point_de_vue)
{
  prog.setUniformValue("vue_modele", matrice_vue * point_de_vue);

  glBegin(GL_QUADS);
  // face coté X = +1
  prog.setAttributeValue(CouleurId, 1.0, 0.0, 0.0); // rouge
  prog.setAttributeValue(SommetId, +1.0, -1.0, -1.0);
  prog.setAttributeValue(SommetId, +1.0, +1.0, -1.0);
  prog.setAttributeValue(SommetId, +1.0, +1.0, +1.0);
  prog.setAttributeValue(SommetId, +1.0, -1.0, +1.0);

  // face coté X = -1
  prog.setAttributeValue(CouleurId, 0.0, 1.0, 0.0); // vert
  prog.setAttributeValue(SommetId, -1.0, -1.0, -1.0);
  prog.setAttributeValue(SommetId, -1.0, -1.0, +1.0);
  prog.setAttributeValue(SommetId, -1.0, +1.0, +1.0);
  prog.setAttributeValue(SommetId, -1.0, +1.0, -1.0);

  // face coté Y = +1
  prog.setAttributeValue(CouleurId, 0.0, 0.0, 1.0); // bleu
  prog.setAttributeValue(SommetId, -1.0, +1.0, -1.0);
  prog.setAttributeValue(SommetId, -1.0, +1.0, +1.0);
  prog.setAttributeValue(SommetId, +1.0, +1.0, +1.0);
  prog.setAttributeValue(SommetId, +1.0, +1.0, -1.0);

  // face coté Y = -1
  prog.setAttributeValue(CouleurId, 0.0, 1.0, 1.0); // cyan
  prog.setAttributeValue(SommetId, -1.0, -1.0, -1.0);
  prog.setAttributeValue(SommetId, +1.0, -1.0, -1.0);
  prog.setAttributeValue(SommetId, +1.0, -1.0, +1.0);
  prog.setAttributeValue(SommetId, -1.0, -1.0, +1.0);

  // face coté Z = +1
  prog.setAttributeValue(CouleurId, 1.0, 1.0, 0.0); // jaune
  prog.setAttributeValue(SommetId, -1.0, -1.0, +1.0);
  prog.setAttributeValue(SommetId, +1.0, -1.0, +1.0);
  prog.setAttributeValue(SommetId, +1.0, +1.0, +1.0);
  prog.setAttributeValue(SommetId, -1.0, +1.0, +1.0);

  // face coté Z = -1
  prog.setAttributeValue(CouleurId, 1.0, 0.0, 1.0); // magenta
  prog.setAttributeValue(SommetId, -1.0, -1.0, -1.0);
  prog.setAttributeValue(SommetId, -1.0, +1.0, -1.0);
  prog.setAttributeValue(SommetId, +1.0, +1.0, -1.0);
  prog.setAttributeValue(SommetId, +1.0, -1.0, -1.0);

  glEnd();
}

void VueOpenGL::dessineLine(Vecteur origine,Vecteur pos,QMatrix4x4 const& point_de_vue){
    prog.setUniformValue("vue_modele", matrice_vue * point_de_vue);
    glLineWidth(10);

    glBegin(GL_LINES);
    prog.setAttributeValue(CouleurId, 1.0, 1.0, 1.0); // rouge
    prog.setAttributeValue(SommetId,  origine.get(0), origine.get(1), origine.get(2));
    prog.setAttributeValue(SommetId,  pos.get(0), pos.get(1), pos.get(2));
    glEnd();

}
