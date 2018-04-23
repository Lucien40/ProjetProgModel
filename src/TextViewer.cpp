//
// Created by lucien on 4/20/18.
//

#include "../inc/TextViewer.h"


void TextViewer::dessine(Ressort const &a_dessiner) {
    flot << "hi";
}

void TextViewer::dessine(System const &a_dessiner) {
    flot << "Syteme: " << '\n';
    flot << a_dessiner.contenu.size();
    for (auto &o : a_dessiner.contenu) {
        flot << "hi";
        o->dessine();
    }
}

void TextViewer::dessine(Pendule const &a_dessiner) {
    flot << "hi";
}

void TextViewer::dessine(Oscillateur const &a_dessiner) {
    flot << "hi";
}