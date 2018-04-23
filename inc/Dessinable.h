//
// Created by huber on 19-Apr-18.
//

#ifndef PENDULUM_DESSINABLE_H
#define PENDULUM_DESSINABLE_H

class SupportADessin;  // Forward declaration to avoid include loops

class Dessinable {

public:

//Constructeur : A besoin d'un support pour savoir comment dessiner
    Dessinable(SupportADessin *support) //Par ref car polymorphique
            : support(support)
    {}

//Destructeur virtuel car class abstaite
    virtual ~Dessinable() {}
    virtual void dessine() = 0;

protected:
    SupportADessin* support;

};

#endif //PENDULUM_DESSINABLE_H