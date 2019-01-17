#include <iostream>
#include "TextViewer.h"

using namespace std;

class masse: public Oscillateur{
public:
    masse(SupportADessin *support,
            Vecteur parametre,
            Vecteur vitesse):
            Oscillateur(support, parametre, vitesse)
            {}

    Vecteur evolution(double t, Vecteur P, Vecteur V) const{
        return Vecteur({0,-9.81});
    }

    unique_ptr <Oscillateur> copie() const {
        return clone();
    }

    unique_ptr<masse> clone() const {
        return unique_ptr<masse>(new masse(*this));
    }


};

int main()
{
    TextViewer view(cout);
    masse m(&view,Vecteur({0.0,1.0}),Vecteur({1,2}));

    IntegrateurEulerCromer Int;

    for(double i(0); i < 10; i += 0.01){
        Int.integre(m,i,0.01);
        m.dessine();
    }
    return 0;
}
