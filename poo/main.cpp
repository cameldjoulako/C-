#include <iostream>

using namespace std;

#include <string>



class NomDeLaClasse {
private:
    //d�clarattion des membres priv�s

public:
    //d�clarattion des membres priv�s

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
