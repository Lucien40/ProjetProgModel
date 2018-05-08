//
// Created by lucien on 4/20/18.
//

#include "../inc/TextViewer.h"


void TextViewer::dessine(Ressort const &aDessiner) {
    flot << "Ressort:" << '\n';

    flot << "Parametre (longeur): " << aDessiner.getPara() << '\n';
    flot << "Vitesse          : " << aDessiner.getVit() << '\n';
    flot << "Viscosite        : " << aDessiner.getViscosite() << '\n';
    flot << "Masse            : " << aDessiner.getMasse() << '\n';
    flot << "Raideur          : " << aDessiner.getRaideur() << '\n';
    flot << "Evo " << aDessiner.evolution(0);
    flot << "-------------------------" << '\n';

}

void TextViewer::dessine(System const &aDessiner) {
    flot << "Syteme: " << '\n';
    for (auto &o : aDessiner.contenu) {
        o->dessine();
    }
}

void TextViewer::dessine(Pendule const &aDessiner) {
    flot << "Pendule:" << '\n';

    flot << "Parametre (angle): " << aDessiner.getPara() << '\n';
    flot << "Vitesse          : " << aDessiner.getVit() << '\n';
    flot << "Viscosite        : " << aDessiner.getViscosite() << '\n';
    flot << "Masse            : " << aDessiner.getMasse() << '\n';
    flot << "Longeur          : " << aDessiner.getLongeur() << '\n';
    //flot << "Evo " << aDessiner.evolution(0);
    flot << "-------------------------" << '\n';

}

void TextViewer::dessine(Oscillateur const &aDessiner) {
    aDessiner.affiche(flot);
    flot << "-------------------------" << '\n';
}
