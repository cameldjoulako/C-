#include <iostream>

using namespace std;

#include <string>
#include "Compte.h"

void impots(Compte &c, double taxe){
    c.solde -= taxe;
    cout << "prelevement de   : " << taxe << "euros pour impot  : " << endl;
}

int main()
{
    cout << "Programmation Orienté Objet!" << endl;

    //Création d'un tableau d'objet
    Compte compte[3];
    Compte comptes[3] = {
        Compte medina(100000, 1, "Medhhina"),
        Compte medi(100000, 1, "Mehhdina"),
        Compte merlin(100000, 1, "Medhhhina")
    };

    comptes[0].afficherNom();











    //Exemple d'utilisation:
    Compte medina(100000, 1, "Medina");
    Compte camel(100000, 2, "camel");
    Compte paul(100000, 2, "paul");


    medina.afficherSolde();
    medina.afficherNumero();
    medina.afficherNom();

    medina.crediter(300000);
    medina.afficherSolde();

    //impots(medina, 10000);
    medina.afficherSolde();

    cout << "Nombre de compte : " << Compte::affichernbComptes << endl;

    return 0;
}
