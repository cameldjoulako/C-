#include <iostream>

using namespace std;

int main()
{
    cout << "Procedural C++ Avancée - types avancées, pointeur, fonction, Tableau" << endl;


    typedef unsigned long int ulong;
    ulong epl = 10;

    cout << "Grand Entier positif ou nul : " << epl << endl;

    //double taille = 5;
    int i(5.2);
    //int i{5.2};//erreur
    //int a{3};

    /*double b = a + 2.5;

    cout << b << endl;*/

    //[]
    /*Les Tableaux*/


    int taille = 12;
    double mois[taille]; //0 .. taille-1

    //code source: shop.homedeve.com

    //acces a un tableau
    double mois1 = mois[0];
    double mois12 = mois[11];

    //double mois50 = mois[50];


    //initialisation du tableau: for , liste d'initialisation {e1, e2, .. en}

    //initialisation du tableau avec la boucle
    double salaire[taille];

    for(int i = 0 ; i<taille; ++i)
        salaire[i] = 2000.0;

    //[2000.0,2000.0,2000.0,2000.0,2000.0,2000.0,2000.0,2000.0,2000.0,2000.0,2000.0,2000.0]

 //initialisation du tableau avec la liste d'initialisation
  double prix[3] = {152.5, 33.58, 1978.33};
  int toto[] = {2, 5, 17};


  //&

  cout << toto<< endl;

  //Les pointeurs

  double a = 55.5;

  double* pa = &a;
  double *pa2 = &a;
  double * pa3 = &a;

  double b = *pa + 1;


cout << b;

//exemple de pointeur et tableau
int a[] = {1, 2, 3, 4, 5};

int * pa = a;
int * pa2 = &a[0];

int b = *(a+1]);//2
b++;
a[2] = b+10;

pa = &a[3]; *pa = 5;
pa++, *pa = 6;


/*Pointeurs des pointeurs*/
char a; a = 'z';
char * b = &a;
char ** c = &b;

//pointeur null:
char * ptnull = nullptr; //NULL

int * p = 0;
if (p == nullptr) cout "vide !";


/*constantes

constexpr
const*/


int x;
int * p1 = &x; // pointeur non const vers entier non const

const int * p2 = &x; // pointeur non constant vers un entier const

int * const p3 = &x // pointeur const vers un entier non const


const int * const p4 = &x; //pointeur constt vers un entier const


const int * p2a = &x;
int const * p2b = &x;














    return 0;
}
