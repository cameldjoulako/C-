#include <iostream>

using namespace std;

struct persone;



struct persone {

    char nom;
    double age;



    void marche();




};

persone::marche() {
 cout << "Je marge";
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
