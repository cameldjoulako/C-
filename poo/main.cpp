#include <iostream>

using namespace std;

#include <string>



class NomDeLaClasse {
private:
    //déclarattion des membres privés

public:
    //déclarattion des membres privés

};


class Compte {
private:
    string nom;
    int numero;
    double solde;


public:
    void crediter(double x){}
    void debiter(double x){}
    void afficherSolde(){}
    void afficherNumero(){}
    void afficherNom(){}
    void changerNom(string n){}
};


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
