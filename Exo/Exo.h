#ifndef EXO_H_INCLUDED
#define EXO_H_INCLUDED


class Tableau {
private:
int *tab;
int taille;

public :
    Taleau(int *t, int n);
    Tableau(const Tableau &t);
    Tableau operator=(const Tableau &t );
    ~Tableau();
};



#endif // EXO_H_INCLUDED


Objet o1
Objet o2

o1*o2
o1+o2
o1/o2
o1==o2
