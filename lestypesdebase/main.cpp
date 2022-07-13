#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2, s;

    cout << "Entrer une chaine de caractere \n";
    cin >> s1;

    cout << "Entrer une autre chaine de caractere \n";
    cin >> s2;

    s = s1+s2;

    cout << s << endl;


    return 0;
}
