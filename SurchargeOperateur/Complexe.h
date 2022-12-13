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

        void setA(double b) {
            a = b;
        }

        friend istream& operator>>(istream &flux, Complexe &c);
};

/*
operator

operator==
operator+

les opérateurs srurchageable:
::
.
sizeof(int)
>> etudiant
<<



*/

#endif // COMPLEXE_H_INCLUDED
