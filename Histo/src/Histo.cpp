/************** définition de la classe histo **********/
#include "histo.h"
#include <iostream>
using namespace std;

/********************* constructeur ********************/
Histo::Histo(float mini, float maxi, int ninter)
{ // protection contre arguments erronés
    if (maxi < mini)
    {
        float temp = maxi;
        maxi = mini;
        mini = temp;
    }
    if (maxi == mini)
        maxi = mini + 1.0; // arbitraire
    if (ninter < 1)
        nint = 1;
    min = mini;
    max = maxi;
    nint = ninter;
    adc = new int[nint]; // alloc emplacements compteurs
    int i;
    for (i = 0; i <= nint - 1; i++)
        adc[i] = 0;
    ecart = (max - min) / nint; // largeur d'une tranche
}
/********************* destructeur *********************/
Histo::~Histo()
{
    delete adc;
}
/********************* opérateur << ********************/
Histo &Histo::operator<<(float v)
{
    int nt = (v - min) / ecart;
    // on ne comptabilise que les valeurs "convenables"
    if ((nt >= 0) && (nt <= nint - 1))
        adc[nt]++;
    return (*this);
}
/********************* opérateur [] ********************/
int Histo::operator[](int n) // résultat par valeur ici
{
    if ((n < 1) || (n > nint))
        n = 1; // protection "débordement"
    return adc[n - 1];
}
