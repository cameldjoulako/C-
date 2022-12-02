#include <cmath>
#include "Complexe.h"
#include <iostream>
using namespace std;


Complexe::Complexe(double x, double y): a(x),b(x) {}

double Complexe::module() {
    double mod = sqrt(a*a+b*b);
    return mod;
}

void Complexe::affiche(){
    cout << "partie reelle: " << a << endl;
    cout << "partie imaginaire: " << b << endl;
}
