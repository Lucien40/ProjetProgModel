using namespace std;

#include "../inc/Vecteur.h"


/* ----------Constructeurs----------*/

Vecteur::Vecteur(unsigned int dim) :
        dimension(dim)
        , data(dim) {
}


Vecteur::Vecteur(const initializer_list<double> &list) :
        dimension(0) {
    for (auto a : list) {
        this->augmente(a);
    }
}

Vecteur::Vecteur(double x, double y, double z) :
        dimension(3)
        , data({x, y, z}) {}

/*-----------------Methodes-------------------*/

void Vecteur::augmente(double d) {
    data.push_back(d);
    dimension++;
}

ostream &Vecteur::affiche(ostream &sortie) const {
    for (auto const &d : data) {
        sortie << d << ' '; // TODO too many zeros after decimal
    }
    return sortie;
}

double Vecteur::norme2() const{
    return sqrt(norme22());
}

double Vecteur::norme22() const{
    double norm(0);
    for(auto d: data){
        norm += (d*d);
    }
    return norm;
}

/*----------------Getters---------------------*/

unsigned int Vecteur::getDimension() const {
    return dimension;
}

double Vecteur::get(unsigned int i) const {
    try {
        if (i < dimension) {
            return data[i];
        } else { throw i; }
    } catch (unsigned int i) {
        cerr << "index " << i << " out of bounds!" << endl;
        return 0;
    }
}

/*----------------Setters---------------------*/

void Vecteur::setCoord(size_t i, double d) {
    try {
        if (i < dimension) {
            data[i] = d;
        } else { throw i; }
    } catch (int i) {
        cerr << "index " << i << " out of bounds!" << endl;
    }
}

/*---------------Operators--------------------*/

bool Vecteur::operator==(Vecteur const &v) const {
    try {
        if (dimension != v.getDimension()) throw out_of_range("mismatched dimensions");
        for (size_t i = 0; i < v.getDimension(); i++) {
            if (v.get(i) != data[i]) return false;
        }
    } catch (const std::out_of_range &oor) {
        cerr << "Out of range error: " << oor.what() << endl;
        return false;

    }
    return true;
}

Vecteur &Vecteur::operator+=(Vecteur const &vAdded) {
    try {
        if (dimension != vAdded.getDimension()) throw out_of_range("mismatched dimensions");
        for (unsigned int i = 0; i < dimension; ++i) {
            data[i] += vAdded.get(i);
        }
    } catch (const std::out_of_range &oor) {
        cerr << "Out of range error: " << oor.what() << endl;
    }
    return *this;
}

const Vecteur Vecteur::operator-() const {
    Vecteur retour(dimension);
    for (unsigned int i(0); i < dimension; ++i) {
        retour.setCoord(i, -data[i]);
    }
    return retour;
}

Vecteur &Vecteur::operator-=(Vecteur const &vAdded) {
    try {
        if (dimension != vAdded.getDimension()) throw out_of_range("mismatched dimensions " );
        for (unsigned int i = 0; i < dimension; ++i) {
            data[i] -= vAdded.get(i);
        }
    } catch (const std::out_of_range &oor) {
        cerr << "Out of range error: " << oor.what() << endl;
    }
    return *this;
}

Vecteur &Vecteur::operator*=(double d) {
    for (unsigned int i = 0; i < dimension; ++i) {
        data[i] *= d;
    }
    return *this;
}


Vecteur &Vecteur::operator/=(double d) {
    for (unsigned int i = 0; i < dimension; ++i) {
        data[i] /= d;
    }
    return *this;
}
/*----------------Fonctions---------------------*/

std::ostream &operator<<(std::ostream &output, Vecteur const &v) {
    v.affiche(output);
    return output;
}

double operator*(Vecteur const &v1, Vecteur const &v2) {
    double result(0.0);
    try {
        unsigned int d = v1.getDimension();
        if (v1.getDimension() != v2.getDimension()) throw out_of_range("mismatched dimensions");
        for (unsigned int i = 0; i < d; ++i) {
            result += (v1.get(i) * v2.get(i));
        }
    } catch (const std::out_of_range &oor) {
        cerr << "Out of range error: " << oor.what() << endl;
    }
    return result;
}

Vecteur operator^(Vecteur const &v1, Vecteur const &v2) {
    Vecteur vResult(0.0, 0.0, 0.0);
    try {
        if (!(v1.getDimension() == 3 && v2.getDimension() == 3)) throw out_of_range("mismatched dimensions");
        vResult.setCoord(0, v1.get(1) * v2.get(2) - v1.get(2) * v2.get(1));
        vResult.setCoord(1, v1.get(0) * v2.get(2) - v1.get(2) * v2.get(0));
        vResult.setCoord(2, v1.get(0) * v2.get(1) - v1.get(1) * v2.get(0));
    } catch (const std::out_of_range &oor) {
        cerr << "Out of range error: " << oor.what() << endl;
    }
    return vResult;
};

const Vecteur operator+(Vecteur result, Vecteur const &vAdded) {
    result += vAdded;
    return result;
}

const Vecteur operator-(Vecteur result, Vecteur const &vAdded) {
    result -= vAdded;
    return result;
}

const Vecteur operator*(double d, Vecteur vAdded) {
    vAdded *= d;
    return vAdded;
}

const Vecteur operator*(Vecteur vAdded, double d) {
    vAdded *= d;
    return vAdded;
}

const Vecteur operator/( Vecteur vAdded,double d) {
    vAdded /= d;
    return vAdded;
}


