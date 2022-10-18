#include "Test.h"

#include <iostream>
#include <string>

using namespace std;

Test::Test(int n)
{
    i = new int;
    *i  = n;
}

Test::Test(const Test &t) {
    i = new int;
    *i = *(t.i);
}

Test::~Test(){
    delete i;
}


void Test::affiche()
{
    cout << "\t valeur pointee par i: " << *i << endl;
    cout << "\t adresse stockee par i: " << i << endl;
}

void Test::modifier(int n)
{
    *i = n;
}
