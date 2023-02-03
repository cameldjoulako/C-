#include <iostream>
#include <math.h>

using namespace std;

class Figure {
    public:
        virtual double surface() = 0;
        virtual double perimetre() = 0;
};



class Rectangle : public Figure {
    protected:
        double largeur, longueur;
    public:
        Rectangle(double x=0, double y=0) {
            largeur = x;
            longueur = y;
        }

        double surface() {
            double calSurface = longueur * largeur;

            return calSurface;
        }
        double perimetre() {
            double calPerimetre = 2*longueur*largeur;
            return calPerimetre;
        }

};


class Cercle : public Figure {
    protected:
        double rayon;
    public:
        Cercle(double r=0):rayon(r){}

        double surface() {
            double calSurface = rayon * rayon *  M_PI;

            return calSurface;
        }
        double perimetre() {
            double calPerimetre = 2*rayon*M_PI;
            return calPerimetre;
        }

};

class Losange : public Figure {
    protected:
        double cote, diagonale;
    public:
        Losange(double x=0, double y=0) : cote(x), diagonale(y) {}

        double perimetre() {
            return (4*cote);
        }

        double surface() {
            return 0;
        }

};




int main()
{
    cout << "Les classes d_objets!" << endl;

    Figure * dessin[4];

    dessin[0] = new Cercle(2);
    dessin[1] = new Rectangle(3, 4);
    dessin[2] = new Losange(2);
    dessin[3] = new Losange(2);

    double encre = 0;

    for (int k = 0; k<4; k++) {
        encre += dessin[k]->perimetre();
    }

    cout << "Litres d'encre a acheter : " << encre << endl;


    return 0;
}
