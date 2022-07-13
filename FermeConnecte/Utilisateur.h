#ifndef UTILISATEUR_H_INCLUDED
#define UTILISATEUR_H_INCLUDED

#include <string>
using std::string;

struct Utilisateur {
    int id;
    string nom;
    string role;
};

Utilisateur createUser(int id, string rol);

void displayUser(Utilisateur user);

#endif // UTILISATEUR_H_INCLUDED
