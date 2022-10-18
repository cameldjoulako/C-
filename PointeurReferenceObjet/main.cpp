#include <iostream>
using namespace std;

#include "Test.h"

int main()
{
    Test a(5); //a.i = adee
    cout << "Je construit a avec 5 comme valeur pointe" << endl;

    a.affiche();

    Test b(a); //b.i = adee
    //Test b = a;
    cout << "Je construit b par copie de a" << endl;
    b.affiche();

    b.modifier(3);
    cout << "Je modifie b avec maintenant 3 comme valeur pointe" << endl;

    b.affiche();

    cout << "Probleme a est modifie aussi !" << endl;
    a.affiche();

    return 0;
}
