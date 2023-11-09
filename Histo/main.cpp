#include "histo.h"
#include <iostream>

#include <Windows.h> // Inclure la bibliothèque Windows.h pour utiliser les fonctions de gestion des encodages de caractères



using namespace std;

main()
{
    // Définir l'encodage de sortie de la console à UTF-8
    SetConsoleOutputCP(CP_UTF8);

    // Définir l'encodage d'entrée de la console à UTF-8
    SetConsoleCP(CP_UTF8);
    const int nint = 4;
    int i;
    Histo h(0., 5., nint); // 4 tranches entre 0 et 5
    h << 1.5 << 2.4 << 3.8 << 3.0 << 2.0 << 3.5 << 2.8 << 4.6;
    h << 12.0 << -3.5;
    for (i = 0; i < 10; i++)
        h << i / 2.0;
    cout << "valeurs des tranches \n";
    for (i = 1; i <= nint; i++)
        cout << "numéro " << i << " : " << h[i] << "\n";
    // une affectation telle que h[2] = ... serait rejetée en compilation
}
