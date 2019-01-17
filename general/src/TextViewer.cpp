#include "../inc/TextViewer.h"

void TextViewer::dessine(Ressort const &aDessiner) {
    aDessiner.affiche(flot);
}

void TextViewer::dessine(System const &aDessiner) {
    aDessiner.affiche(flot);
}

void TextViewer::dessine(Pendule const &aDessiner) {
    aDessiner.affiche(flot);
}

void TextViewer::dessine(const ChariotPenduleRessort &aDessiner){
    aDessiner.affiche(flot);
}

void TextViewer::dessine(Oscillateur const &aDessiner) {
    aDessiner.affiche(flot);
}

void TextViewer::dessine(PenduleDouble const &aDessiner){
    aDessiner.affiche(flot);
}
