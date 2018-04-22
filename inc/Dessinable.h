//
// Created by huber on 19-Apr-18.
//

#ifndef PENDULUM_DESSINABLE_H
#define PENDULUM_DESSINABLE_H

class SupportADessin;

class Dessinable {

public:
    Dessinable(SupportADessin* support)
            : support(support)
    {}
    virtual ~Dessinable() {}
    virtual void dessine() = 0;

protected:
    SupportADessin* support;

};

#endif //PENDULUM_DESSINABLE_H