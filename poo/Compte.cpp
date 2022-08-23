#include <iostream>
#include <string>

#include "Compte.h"

using namespace std;

int Compte::nbComptes = 0;

Compte::crediter(double x){
    solde +=x;
}

void Compte::debiter(double x){
    solde -=x;
}

void Compte::afficherSolde() const {
   cout << "solde : " << solde << endl;
}

void afficherNumero(){
cout << "numero de compte : " << numero << endl;
}

void afficherNom(){
    cout << "nom  : " << nom << endl;
}

void affichernbComptes(){
    cout << "nombre de comptes  : " << nbComptes << endl;
}


void changerNom(string n){
    nom = n;
}
