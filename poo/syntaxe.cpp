#include <iostream>

using namespace std;

#include <string>
#include "Compte.h"



class NomDeLaClasse {
private:
    //d�clarattion des membres priv�s

public:
    //d�clarattion des membres public

};


class Personne {
    string nom;
    int age;
};

class Compte {
    int numero;
    double solde;
};


///cr�ation dynamique d'un objet
Nomdelaclasse *pt;

pt = new Nomdelaclasse;


Compte *compte;
compte =  new Compte;


Compte *compte;
compte =  new Compte(parametres);

(*compte).afficherNom();


compte->afficherSolde();

delete compte;

//Creation dynamique d'un tableau d'objet
int taille = 2;

Compte *comptes;
compte =  new Compte[taille];
[0, 1]

compte[0].afficherNom;

compte




























int main()
{
    cout << "Hello world!" << endl;


    //syntaxe de declaration d'une instance
    NomDelaClasse nomDel'objet;

    Compte medina;

    //access aux attributs et m�thodes publique d'un objet
    NomDeL'objet.nOMdELATTRIBUT;
    NomDeL'objet.nOMdELaMethode();



    return 0;
}
