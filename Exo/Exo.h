#ifndef EXO_H_INCLUDED
#define EXO_H_INCLUDED


class Tableau {
private:
int *tab;
int taille;

public :
    Taleau(int *t, int n);
    Tableau(const Tableau &t);
    ~Tableau();
};



#endif // EXO_H_INCLUDED
