#include "Vecteur.h"
#include <iostream>
using namespace std;

int main(){
    Vecteur vect1(1.0,0.0,-0.1);
    Vecteur vect2(2.6,3.5,4.1);

    // v1 = (1.0, 2.0, -0.1)

    vect1.setCoord(1, 2.0); // pour tester setCoord()

    // v2 = (2.6, 3.5,  4.1)

    Vecteur vect3(vect1);

    cout << "Vecteur 1 : " << vect1 << endl;

    cout << "Vecteur 2 : " << vect2 << endl;

    cout << "Le Vecteur 1 est ";
    if (vect1==vect2) {
        cout << "égal au";
    } else {
        cout << "différent du";
    }
    cout << " Vecteur 2," << endl << "et est ";
    if (not (vect1==vect3)) {
        cout << "différent du";
    } else {
        cout << "égal au";
    }
    cout << " Vecteur 3." << endl;


    vect1 = 2 *	 vect2 ;

    cout << "(1.0, 2.0, -0.1) + (2.6, 3.5, 4.1) = (3.6, 5.5, 4.0) ?" << endl;
    Vecteur a(1.0, 2.0, -0.1);
    Vecteur b(2.6, 3.5, 4.1);
    cout << "= (" << a + b << ")"<< endl;
    Vecteur o(0,0,0);
    cout << "(" << a <<") +" << "(" << o << ") =" << a + o<< endl;

    cout << "(" << a <<") - (" << b << ") =" << a - b<< endl;
    cout << "(" << a <<") - (" << a << ") =" << a - a<< endl;
    Vecteur A(a);
    A.augmente(5);
    cout << "(" << a <<") - (" << A << ") =" << (a - A) << endl;
    cout << "-(" << a << ") = (" << -a << ")"<< endl;
    cout << ((a-b)==(a+(-b))) << endl;

    cout << "3 * (" << a <<") =" << 3*a<< endl;

    cout << "(" << a <<") * (" << b << ") =" << (a * b)<< endl;
    cout << "(" << a <<") ^ (" << b << ") =" << (a ^ b) << endl;
    cout << "||(" << a <<")||² = " << a.norme22()<< endl;
    cout << "||(" << b <<")||² = " << b.norme22()<< endl;
    return 0;
}
