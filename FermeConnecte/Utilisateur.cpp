#include <iostream>
#include "Utilisateur.h"
#include "helper.h"
using namespace std;

Utilisateur createUser(int id, string role){
    cout << "CREATION UTILISATEUR DE LA FERME" << endl;
    cout << "" << endl;
    cout << "" << endl;
    string nom="";
    cout << "Entrer le nom : ";
    recupereDonnee(nom);

    cout << "" << endl;
    Utilisateur user;

    user.id = id;
    user.nom = nom;
    user.role = role;

    return user;
}

void displayUser(Utilisateur user) {

    cout << "" << endl;cout << "" << endl;
    cout << "Affichage utilisateur";
    cout << "" << endl;cout << "" << endl;cout << "" << endl;
    cout << "Id : " << user.id << endl;
    cout << "Nom : " << user.nom << endl;
    cout << "Role : " << user.role << endl;

    cout << "" << endl;
}


