#ifndef COMPTE_H_INCLUDED
#define COMPTE_H_INCLUDED
#include <string>

class Compte {
private:
    std::string nom;
    int numero;
    double solde;
    static int nbComptes;

public:
    void crediter(double x){}
    void debiter(double x){}
    void afficherSolde(){}
    void afficherNumero(){}
    void afficherNom(){}
    void changerNom(std::string n){}
    static void affichernbComptes(){}
};

#endif // COMPTE_H_INCLUDED

