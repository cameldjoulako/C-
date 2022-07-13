#include <iostream>
#include <vector>

using namespace std;


enum genre {homme, femme};

struct Personne {
    string nom;
    string prenom;
    int annee;
    genre sexe;
};

Personne nouvellePersonne(string nom, string prenom, int annee, genre sexe){
    Personne p;
    p.nom=nom;
    p.prenom=prenom;
    p.annee=annee;
    p.sexe=sexe;

    return p;
}

int main()
{

    vector<Personne> population = {
        nouvellePersonne("Bonnet", "Jean", 1979, homme),
        nouvellePersonne("Lefebvre", "Michel", 1981, homme),
        nouvellePersonne("Leroy", "Pierre", 1977, homme),
        nouvellePersonne("Petit", "Philippe", 1984, homme),
        nouvellePersonne("Morel", "Alain", 1990, homme),
        nouvellePersonne("Fournier", "Marie", 1985, femme),
        nouvellePersonne("Durand", "Nathalie", 1989, femme),
        nouvellePersonne("Dubois", "Isabelle", 1975, femme),
        nouvellePersonne("Moreau", "Catherine", 1982, femme),
        nouvellePersonne("Girard", "Sylvie", 1987, femme)
    };

    return 0;
}
