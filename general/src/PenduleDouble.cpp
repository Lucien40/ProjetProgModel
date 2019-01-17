#include "../inc/PenduleDouble.h"

/*================================================================================*/

using namespace std;

/*================================== Copie =======================================*/

unique_ptr <PenduleDouble> PenduleDouble::clone() const {
    return unique_ptr<PenduleDouble>(new PenduleDouble(*this));
}

unique_ptr <Oscillateur> PenduleDouble::copie() const {
    return clone();
}

/*================================== Methodes ====================================*/

Vecteur PenduleDouble::evolution(double t, Vecteur P, Vecteur V) const{
    double dTheta (P.get(0) - P.get(1));
    double M(m1 + m2);

    double accTheta1(  m2 * g.norme2() * cos(dTheta) * sin (P.get(1)) );
    accTheta1 -= M  * g.norme2() * sin(P.get(0));
    accTheta1 -= m2 * L1 * pow(V.get(0), 2) * cos(dTheta) * sin( dTheta);
    accTheta1 -= m2 * L2 * pow(V.get(1), 2) * sin(dTheta);
    accTheta1 /= ((m1 + m2 * pow(sin(dTheta), 2)) * L1);

    double accTheta2(   M * g.norme2() * cos(dTheta) * sin (P.get(0)) );
    accTheta2 -= M  * g.norme2() * sin(P.get(1));
    accTheta2 += m2 * L2 * pow(V.get(1), 2) * cos(dTheta) * sin( dTheta);
    accTheta2 += M  * L1 * pow(V.get(0), 2) * sin(dTheta);
    accTheta2 /= ((m1 + m2 * pow(sin(dTheta), 2)) * L2);

    return Vecteur({accTheta1,accTheta2});
}

void PenduleDouble::dessine() {
    support->dessine(*this);
}

ostream& PenduleDouble::affiche(ostream &flot) const{
    flot << "==========================" << '\n';
    flot << "Pendule double:" << '\n';
    flot << "Parametre (2 angles): " << P  << '\n';
    flot << "Vitesse             : " << V  << '\n';
    flot << "Masse 1             : " << m1 << '\n';
    flot << "Masse 2             : " << m2 << '\n';
    flot << "Longeur 1           : " << L1 << '\n';
    flot << "Longeur 2           : " << L2 << '\n';
    flot << "Acceleration        : " << evolution(0,P,V) << '\n';

    return flot;
}

/*================================ Get ===========================================*/

double PenduleDouble::getLongeur1() const{
    return L1;
}

double PenduleDouble::getLongeur2() const{
    return L2;
}

double PenduleDouble::getMasse1() const{
    return m1;
}

double PenduleDouble::getMasse2() const{
    return m2;
}

Vecteur PenduleDouble::getPositionM1() const{
    return O + (L1* cos(P.get(0)) / g.norme2() ) * g + L1 * sin(P.get(0))*a;
}

Vecteur PenduleDouble::getPositionM2() const{
    return getPositionM1() + (L2* cos(P.get(1)) / g.norme2() ) * g + L2 * sin(P.get(1))*a;
}

Vecteur PenduleDouble::getOrigine() const{
    return O;
}

Vecteur PenduleDouble::getAxis() const{
    return (g^a)/((g^a).norme2());
}

/*================================== Set =========================================*/

void PenduleDouble::setLongeur1(double L){
    L1 = L;
}

void PenduleDouble::setLongeur2(double L){
    L2 = L;
}

void PenduleDouble::setMass1(double m){
    m1 = m;
}

void PenduleDouble::setMass2(double m){
    m2 = m;
}
