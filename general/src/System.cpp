#include "../inc/System.h"

using namespace std;

void System::add(Oscillateur const &o) {
    contenu.push_back(o.copie());
}

void System::dessine() {
    support->dessine(*this);
}

void System::evolue(double t, double dt) {
    for (auto &o : contenu) {
        Int.integre(*o, t, dt);
    }
}

ostream& System::affiche(ostream &flot) const{
    flot << "Systeme :" << '\n';
    for(auto & o : contenu){
        o->affiche(flot);
    }
    return flot;
}



