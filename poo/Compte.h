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
    //constructeur
    Compte(double x, int i, std::string n);
    Compte();

    //destructeur
    ~Compte();

    void crediter(double x);
    void debiter(double x);
    void afficherSolde() const;
    void afficherNumero();
    void afficherNom();
    void changerNom(std::string n);
    static void affichernbComptes();
    friend void impots(Compte &c, double taxe);
};

#endif // COMPTE_H_INCLUDED

