#include <iostream>

using namespace std;

int main()
{
    /*  Les  de contr�le en C++  */
    cout << "Les conditions en C++ \n\n\n" ;

    for(int i=5; i>0; i--) {
       if(i < 3)
            continue;
        cout << i << endl;
    }

    cout << "D�collage !" ;

	return 0;
}
