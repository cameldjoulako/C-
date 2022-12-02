#include <iostream>

using namespace std;

int main()
{
    int x, s, nb=0;
    double moyenne;

    do{
        cout << "entier: ";
        cin >> x;

        if(x>0) {
            s = s+x;
            nb++;
        } else if(x<0) {
            cout << "Erreur";
        }

    }while(x!=0);

    if(nb==0) {
        cout << "Aucun entier - pas de moyen" << endl;
    } else {
        moyenne = s/nb;
        cout << "Moyene : " << moyenne << endl;
    }
    return 0;
}
