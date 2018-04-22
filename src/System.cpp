//
// Created by huber on 20-Apr-18.
//

#include "../inc/System.h"

void System::add(Oscillateur const &o) {

    contenu.push_back(o.copie());

}