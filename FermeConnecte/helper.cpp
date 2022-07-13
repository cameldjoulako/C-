#include <iostream>
#include "helper.h"
using namespace std;

void recupereDonnee(string &data) {
    while ( !(cin >> data) ) {
        cout << "Entrée une donnée valide SVP" << endl;
        cin.clear();
        cin.ignore(255, '\n');
    }
}



Personne nouvellePersonne(string nom, string prenom, int annee, genre sexe) {
    Personne p;

    p.nom = nom;
    p.prenom = prenom;
    p.annee = annee;
    p.sexe = sexe;

    return p;
};



//main 1
Personne P = nouvellePersonne("Medina", "Medina", 1325, femme);

2/
string nom, string prenom, int annee, genre sexe;

 void entreesecur()

 nouvellePersonne(nom, )
