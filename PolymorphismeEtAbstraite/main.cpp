#include <iostream>

#include <math.h>

using namespace std;

//POSITION DU PROBLEME
/*class Rectangle {
    protected:
        double largeur, longueur;
    public:
        Rectangle(double x=0, double y=0) {
            largeur = x;
            longueur = y;
        }
        double surface() {
            return (longueur*largeur);
        }

        double peinture() {
            return (3*surface());
        }
};

class Rectangle3D : public Rectangle {
    protected:
        double hauteur;
    public:
        Rectangle3D(double x, double y, double z):Rectangle(x, y) {
            hauteur = z;
        }
        Rectangle3D():hauteur(0) {}

        double surface() {
            double surface = 0;

            surface = 2*longueur*largeur + 2*largeur*hauteur+2*longueur*hauteur;

            return surface;
        }
};


*/




//Methode virtuel
    /*class Rectangle {
        protected:
            double largeur, longueur;
        public:
            Rectangle(double x=0, double y=0) {
                largeur = x;
                longueur = y;
            }
            virtual ~Rectangle(){}
            virtual double surface() {
                return (longueur*largeur);
            }

            double peinture() {
                return (3*surface());
            }
    };

    class Rectangle3D : public Rectangle {
        protected:
            double hauteur;
        public:
            Rectangle3D(double x, double y, double z):Rectangle(x, y) {
                hauteur = z;
            }
            Rectangle3D():hauteur(0) {}

            double surface() {
                double surface = 0;

                surface = 2*longueur*largeur + 2*largeur*hauteur+2*longueur*hauteur;

                return surface;
            }

    };*/


    //LES CLASSES ABSTRAITES EN C++

    /*syntaxe methode abstraite

    virtual typeDeRetour nomDeLaMethode(parametres) = 0;

    */
/*
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

};


*/

int main()
{
    cout << "POLYMORPHISME" << endl;

    Rectangle rec(2, 3);

    cout << "Nombre de pots de peintures: " << rec.peinture() << endl;

    Rectangle3D boite(2, 3, 4);
    cout << "Nombre de pots de peintures: " << boite.peinture() << endl;

    /*Rectangle *rec;
    rec = new Rectangle(2, 3);
    cout << "Surface du rectangle: " << rec->surface() << endl;
    delete rec;

    cout << "Surface de la boite: " << rec->surface() << endl;
    */

    /*Rectangle *rec
    rec = new Rectangle3D(2, 3, 4);
    delete rec;*/


    /*cout << "CLASSE ABSTRAITE" << endl;

    Figure *f;

    f = new Cercle(1);

    cout << "Perimetre du cercle : " << f->perimetre() << endl;
    cout << "surface du cercle : " << f->surface() << endl;

    delete f;

    f = new Rectangle(2, 3);
    cout << "surface du rectangle : " << f->surface() << endl;
    delete f;


    Figure * dessin[4];*/




    return 0;
}
