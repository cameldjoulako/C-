#include "Exo.h"
#include <iostream>
#include <string>

using namespace std;

Tableau::Taleau(int *t, int n) {
    tab = new int[n];
    taille = n;

    for (int k = 0; k<n; k++)
        tab[k] = t[k];

}

Tableau::Tableau(const Tableau &t){
    taille = t.taille;
    tab = new int[t.taille];

    for (int k = 0; k<t.taille; k++)
        tab[k] = t.tab[k];


}

Tableau::~Tableau() {

    delete tab;
}
