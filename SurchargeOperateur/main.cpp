#include <iostream>
#include "Complexe.h"

using namespace std;

int main()
{
    Complexe c(9, 10.5);
    c.affiche();
    double m = c.module();
    cout << "Module : " << m << endl;
    return 0;
}
