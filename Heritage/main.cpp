#include <iostream>

using namespace std;



    /*Heritage public d'un attribut public
    class Mere {
        public :
            double argent;
    };

    class Fille : public Mere {
        public :
            void affiche() {
               cout << "Argent accessible: " << argent << endl;
            }
    };

    */


    /*Heritage public d'un attribut protected
    class Mere {
        protected :
            double argent;
    };

    class Fille : public Mere {
        public :
            void affiche() {
               cout << "Argent accessible: " << argent << endl;
            }
    };*/


    /*Heritage public d'un attribut protected
    class Mere {
        private :
            double argent;
    };

    class Fille : public Mere {
        public :
            void affiche() {
               cout << "Argent inaccessible: " << argent << endl;
            }
    };*/


    /*Heritage public d'un attribut protected
    class Mere {
        private :
            double argent;
    };

    class Fille : public Mere {
        public :
            void affiche() {
               cout << "Argent inaccessible: " << argent << endl;
            }
    };*/



    /*Heritage private d'un attribut protected
    class Mere {
        protected :
            double argent;
    };

    class Fille : private Mere {
        public :
            void affiche() {
               cout << "Argent accessible: " << argent << endl;
            }
     };

*/

/*CONVERSION D'OBJETS

    class Mere {
        protected :
            double argent;
    };

    class Fille : public Mere {
        private:
            bool amant;

        public :
            void affiche() {
               cout << "Argent accessible: " << argent << endl;
            }
     };

    */


     /*CONVERSION D'OBJETS

    class Mere {
        public :
            double argent;
    };

    class Fille : public Mere {
        public:
            bool amant;

        public :
            void affiche() {
               cout << "Argent accessible: " << argent << endl;
            }
     };
    */

    /*CONSTRUCTEURS avec heritage

    class Rectangle {
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
    };


    class Rectangle3D : public Rectangle {
        protected:
            double hauteur;
        public:
            Rectangle3D(double x=0, double y=0, double z=0):Rectangle(x, y) {
                hauteur = z;
            }
            double volume() {
                return (longueur*largeur*hauteur);
            }
    };

    */


    /* contructeur par defaut
    class Rectangle3D : public Rectangle {
        protected:
            double hauteur;
        public:
            Rectangle3D(double x, double y, double z):Rectangle(x, y) {
                hauteur = z;
            }
            Rectangle3D(): hauteur(0){}
            double volume() {
                return (longueur*largeur*hauteur);
            }
    };*/




    /* AFFECTATION

    Rectangle3D & operator=(const Rectangle3D& rec) {
        hauteur = rec.hauteur;
    }
    */


    //Affectation

    //classe rectangle
    Rectangle & operator=(const Rectangle& rec) {
        longueur = rec.longueur;
        largeur = rec.largeur;
        return (*this);
    }



    //classe rectangle3d
    Rectangle3D & operator=(const Rectangle3D& rec) {

        Rectangle::operator=(rec),
        hauteur = rec.hauteur;
        return (*this);
    }

    Rectangle r1, r2;
    r1 = r2;


int main()
{

    cout << "Heritage en C++" << endl;

    /*Test Heritage public d'un attribut public

    Mere memere;
    memere.argent = 1000;

    Fille fifille;
    fifille.argent = 100;

    fifille.affiche();



    /*Test Heritage public d'un attribut protected

    Mere memere;
    //memere.argent = 1000;

    Fille fifille;
    fifille.argent = 100;

    fifille.affiche();
    */

    //TEST CONVERSION D'OBJETS
    /*Mere memere;
    Fille fifille;
    memere = fifille;

    //fifille = memere; // cas illicite
    */


    /*/TEST CONVERSION D'OBJETS avec pointeur et reference
    Mere memere;
    Fille fifille;

    fifille.argent = 56;
    fifille.amant = true;

    Mere *m = &memere;

    Fille *f = &fifille;

    m=f;

    cout << m->argent << endl;
    cout << m->amant << endl;
    */



    /*Test CONSTRUCTEURS avec heritage
    Rectangle3D boite(2, 4, 5);
    cout << "Volume : " << boite.volume() << endl;

    Rectangle rec = boite;

    cout << "Surface : " << rec.surface() << endl;

    */

    return 0;
}
