/*** fichier histo.h : déclaration de la classe Histo ***/
class Histo
{
    float min; // borne inférieure
    float max; // borne supérieure
    int nint;  // nombre de tranches utiles
    int *adc;  // pointeur sur les compteurs associés à chaque intervalle
    // adc [i-1] = compteur valeurs de la tranche de rang i
    float ecart; // larg d'une tranche (pour éviter un recalcul systématique)
public:
    Histo(float = 0.0, float = 1.0, int = 10); // constructeur
    ~Histo();                                  // destructeur
    Histo &operator<<(float);                  // ajoute une valeur
    int operator[](int);                       // nombre de valeurs dans chaque tranche
};
