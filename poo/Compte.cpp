#include <iostream>
#include <string>

#include "Compte.h"

using namespace std;


int Compte::nbComptes = 0;

Compte::Compte(double x, int i, std::string n){
    solde = x;
    numero = i;
    nom = n;
    nbComptes++;
}

Compte::~Compte(){
    cout << "Suppression d'un compte : " << solde << endl;
    nbComptes--;
}

Compte::Compte(){
    solde = 0;
    numero = 0;
    nom = "NoName";
    nbComptes++;
}


void Compte::crediter(double x){
    solde += x;
}

void Compte::debiter(double x){
    solde -= x;
}

void Compte::afficherSolde() const {
   cout << "solde : " << solde << endl;
}

void Compte::afficherNumero(){
    cout << "numero de compte : " << numero << endl;
}

void Compte::afficherNom(){
    cout << "nom  : " << nom << endl;
}

void Compte::affichernbComptes(){
    cout << "nombre de comptes : " << nbComptes << endl;
}


void Compte::changerNom(string n){
    nom = n;
}
