#include "Vecteur.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	Vecteur vect1;
	Vecteur vect2;
	Vecteur vect3;

	/* Cette partie
	 * (1) pourrait être écrite autrement, par exemple avec des
	 *     manipulateurs (setCoord) ;
	 * (2) sera revue dans 2 semaines (constructeurs, surcharge des opérateurs).
	 */
	// v1 = (1.0, 2.0, -0.1)
	vect1.augmente(1.0); vect1.augmente(0.0); vect1.augmente(-0.1);
	vect1.setCoord(1, 2.0); // pour tester setCoord()

	// v2 = (2.6, 3.5,  4.1)
	vect2.augmente(2.6); vect2.augmente(3.5); vect2.augmente(4.1);

	vect3 = vect1;

	cout << "Vecteur 1 : ";
	vect1.affiche();
	cout << endl;

	cout << "Vecteur 2 : ";
	vect2.affiche();
	cout << endl;

	cout << "Le Vecteur 1 est ";
	if (vect1.compare(vect2)) {
		cout << "égal au";
	} else {
		cout << "différent du";
	}
	cout << " Vecteur 2," << endl << "et est ";
	if (not vect1.compare(vect3)) {
		cout << "différent du";
	} else {
		cout << "égal au";
	}
	cout << " Vecteur 3." << endl;
	return 0;
}
