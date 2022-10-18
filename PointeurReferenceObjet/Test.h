#ifndef TEST_H
#define TEST_H

#include <string>


class Test
{
    public:
        Test(int n);
        Test(const Test &t);
        void affiche();
        void modifier(int n);
        Test & operator=(const Test &j);
        ~Test();

    private:
        int *i;
};

#endif // TEST_H

