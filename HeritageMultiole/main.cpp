#include <iostream>

using namespace std;

    /* EXEMPLE MULTIPLE*/

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
            //using Carnivore::afficher;

           /* void afficher() {
                Carnivore::afficher();
                Herbivore::afficher();
            }*/

    };

int main()
{
    cout << "Heritage multiple!" << endl;

    Omnivore chat(2, 1, false);
    //chat.Carnivore::afficher();
    //chat.Herbivore::afficher();
    chat.afficher();
    return 0;
}
