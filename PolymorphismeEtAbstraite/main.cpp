#include <iostream>

using namespace std;

    class Rectangle {
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

    };




int main()
{
    cout << "POLYMORPHISME" << endl;

    /*Rectangle rec(2, 3);

    cout << "Nombre de pots de peintures: " << rec.peinture() << endl;

    Rectangle3D boite(2, 3, 4);
    cout << "Nombre de pots de peintures: " << boite.peinture() << endl;*/

    /*Rectangle *rec;
    rec = new Rectangle(2, 3);
    cout << "Surface du rectangle: " << rec->surface() << endl;
    delete rec;

    cout << "Surface de la boite: " << rec->surface() << endl;
    */

    Rectangle *rec
    rec = new Rectangle3D(2, 3, 4);
    delete rec;





    return 0;
}
