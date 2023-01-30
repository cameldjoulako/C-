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

    /*classe rectangle
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
    }*/

  //Syntaxe appel methode de la classe clere apres redefinition
  //nomDeLaClasseMère::NomDeLaMéthode()


  /*HERITAGE ET REDEFINITION

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
             double surface() {
                 double surface {0};
                 surface = 2*longueur*largeur + 2*largeur*hauteur + 2*longueur*hauteur;
                return surface;
            }
    };*/

    /* HERITAGE MULTIPLE: SYNTAXE

    class Fille : visibilité mere1, visibilité mere2, visibilité mere3... {
        //declaration des nouveaux membres
    } ;*/


    /* EXEMPLE MULTIPLE
    class Carnivore {
        protected:
            double poidsViande;
        public:
            Carnivore(double x=0):poidsViande(x){}
            void afficher() {
               cout << "Je mange " << poidsViande << " kilos de steack par jour" << endl;
            }
    };

    class Herbivore {
        protected:
            double poidsHerbe;
        public:
            Herbivore(double x=0):poidsHerbe(x){}
            void afficher() {
               cout << "Je mange " << poidsHerbe << " kilos de gazon par jour" << endl;
            }
    };


    class Omnivore : public Carnivore, public Herbivore {
        private :
            bool humain;
        public:
            Omnivore(double x, double y, bool h):Carnivore(x), Herbivore(y), humain(h){}

            Omnivore():humain(true) {}

            //using Herbivore::afficher;

           /* void afficher() {
                Carnivore::afficher();
                Herbivore::afficher();
            }

    };

    */

    //Gestion de la duplication des attributs

    class Animal {
        protected:
            int age;
        public:
            Animal(int a = 0):age(a){}
    };

    class Carnivore: public virtual Animal {
        protected:
            double poidsViande;
        public:
            Carnivore(int a = 0, double x=0): Animal(a), poidsViande(x){}
            void afficher() {
               cout << "Je mange " << poidsViande << " kilos de steack par jour" << endl;
            }
    };

    class Herbivore : public virtual Animal {
        protected:
            double poidsHerbe;
        public:
            Herbivore(int a = 0, double x=0) : Animal(a), poidsHerbe(x){}
            void afficher() {
               cout << "Je mange " << poidsHerbe << " kilos de gazon par jour" << endl;
            }
    };

    class Omnivore : public Carnivore, public Herbivore {
        private :
            bool humain;
        public:
            Omnivore(int a, double x, double y, bool h) : Animal(a), Carnivore(a, x), Herbivore(a, y), humain(h){}

            Omnivore():humain(true) {}

            void afficher() {
                Carnivore::afficher();
                Herbivore::afficher();
                cout << "J'ai " << Herbivore::age << " ans " << endl;

            }

    };
    /* Solution du probleme de duplication des attributs : methode avec  "virtuel"
        SYNTAXE/

        class fille : visibilité virtual mère {

        };

    */


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

    /*test HERITAGE ET REDEFINITION
     Rectangle3D boite(2, 4, 5);
     cout << "Surface de la boite: " << boite.surface() << endl;
     cout << "Surface de la base: " << boite.Rectangle::surface() << endl;*/

     /*TEST HERITAGE MULTIPLE
     Omnivore chat (2, 1, false);
     chat.afficher();*/

     chat.Carnivore::afficher()
     chat.Herbivore::afficher()


     //TEST HERITAGE MULTIPLE - ambiguité
     Omnivore chat(15, 2, 1, false);
     chat.afficher();


    return 0;
}
