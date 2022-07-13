#include <iostream>

using namespace std;

int main()
{
    /*  Les  de contrôle en C++  */
    cout << "Les conditions en C++ \n\n\n" ;

    for(int i=5; i>0; i--) {
       if(i < 3)
            continue;
        cout << i << endl;
    }

    cout << "Décollage !" ;

	return 0;
}
