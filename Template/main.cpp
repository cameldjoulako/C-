#include <iostream>

using namespace std;

/*
string maximum(string x, string y)
 {
     if(x>y)
        return x;
     else
        return y;
 }

template <typename T>

T maximum(T x, T y) {
    if(x>y)
        return x;
    else
        return y;
}

template <class T>
T maximum(T x, T y) {
    if(x>y)
        return x;
    else
        return y;
}


//template de fonction avec parametre de type classe




//syntaxe de declaration d'un template de fonction
//template <typename R, typename S, ... class T, class U>

//--------------------------------------------------------

//Templates de classe
template <typename R, typename S, ... class T, class U>
*/


//Declaration d'un template de classe pour créer les tableau
template <class T=int>
class Tableau {
    private:
        T*tab;
        int nb;
    public:
        Tableau(int n=1){
            nb = n;
            tab = new T[nb];
        }

        ~Tableau() {
            delete[]tab;
        }

        T& operator[](int index) {
            return tab[index];
        }
};


int main()
{
/*
    cout << "Les templates!" << endl;

    int a = 3;
    int b = 5;

    double c=1.2;

    double d = 1.1;

    cout << maximum("nom","camel") << endl;
    cout << maximum(a,b) << endl;

    cout << maximum(c,d) << endl;
    */

    //test template de classe
    Tableau<int> a(10);
    Tableau<double> b(10);

    for(int i=0;i<10; i++) a[i] = (i+1)*(i+1);
    for(int i=0;i<10; i++) b[i] = (i+11)*(i+1.1);

    for(int i=0;i<10; i++) cout << a[i] << " " << b[i] << endl;

    return 0;
}
