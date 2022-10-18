#ifndef TEST_H
#define TEST_H

#include <string>


class Test
{
    public:
        Test(int n);
        void affiche();
        void modifier(int n);

    private:
        int *i;
};

#endif // TEST_H

