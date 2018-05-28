#include "../inc/Oscillateur.h"

using namespace std;

/*===================== Methodes ========================*/

ostream &Oscillateur::affiche(ostream &out) const {
    out << "Oscillateur" << endl;
    out << "Para:    " << P << endl;
    out << "Vitesse: " << V << endl;
    return out;
}

void Oscillateur::afficheEvolution(double t) const {
    cout << "sa fonction d'evolution donne a t = " << t << " : " << evolution(t,getPara(),getVit());
}

void Oscillateur::dessine() {
    support->dessine(*this);
}


/*===================== Get ========================*/

Vecteur Oscillateur::getPara() const {
    return P;
}

Vecteur Oscillateur::getVit() const {
    return V;
}

/*===================== Set ========================*/

void Oscillateur::setPara(Vecteur P) {
    try {
      if (this->P.getDimension() != P.getDimension()) throw out_of_range("mismatched dimensions");
        this->P = P;
        } catch (const std::out_of_range &oor) {
            cerr << "Out of range error: " << oor.what() << endl;
        }
}

void Oscillateur::setVit(Vecteur V) {
    try {
      if (this->V.getDimension() != V.getDimension()) throw out_of_range("mismatched dimensions");
        this->V = V;
        } catch (const std::out_of_range &oor) {
            cerr << "Out of range error: " << oor.what() << endl;
        }
}

/*===================== Functions ========================*/

std::ostream &operator<<(std::ostream &out, Oscillateur const &o) {
    return o.affiche(out);
}
