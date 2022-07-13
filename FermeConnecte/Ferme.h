#ifndef FERME_H_INCLUDED
#define FERME_H_INCLUDED

#include <vector>

#include "capteur.h"
#include "Utilisateur.h"
#include <string>
using std::string;

using std::vector;

int const nombresUtilisateur{2};

struct Ferme {
    int id;
    string nom;
    Utilisateur utilisateur[nombresUtilisateur];
    vector<Capteur> capteurs;
};

Ferme creerFerme();

void afficheFerme(Ferme const ferme);

#endif // FERME_H_INCLUDED
