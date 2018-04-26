#ifndef PENDULUM_DESSINABLE_H
#define PENDULUM_DESSINABLE_H

class SupportADessin;  // Forward declaration to avoid include loops

class Dessinable {

protected:
    SupportADessin *support;

public:

//Constructeur : A besoin d'un support pour savoir comment dessiner

    Dessinable(SupportADessin *support) //Par ref car polymorphique
            :
            support(support) {}

//Destructeur virtuel car class abstaite
    virtual ~Dessinable() {}


    virtual void dessine() = 0;


};

#endif //PENDULUM_DESSINABLE_H