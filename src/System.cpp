//
// Created by huber on 20-Apr-18.
//

#include "../inc/System.h"
#include <iostream>

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

