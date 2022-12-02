#ifndef COMPLEXE_H_INCLUDED
#define COMPLEXE_H_INCLUDED

class Complexe {
    private:
        double a,b;

    public:
        Complexe(double x=0, double y=0);
        double module();
        void affiche();

        double getA(){
            return a;
        }

         double getB(){
            return b;
        }
};



#endif // COMPLEXE_H_INCLUDED
