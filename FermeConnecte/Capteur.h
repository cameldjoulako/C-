#ifndef CAPTEUR_H_INCLUDED
#define CAPTEUR_H_INCLUDED

using std::string;
#include "capteur.h"

struct Capteur {
    int identifiant;
    string nom;
    double donnee;
}

Capteur ajouterCapteur();
void affichecapteur(Capteur const capteur);

#endif // CAPTEUR_H_INCLUDED
