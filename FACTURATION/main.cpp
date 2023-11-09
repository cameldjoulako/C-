#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// Définition de la structure produit
struct produit {
    string nom;
    int quantite;
    float prix_unitaire;
};

// Fonction pour calculer le total de la vente
float totalVente(vector<produit>& produits) {
    float total = 0;
    for (produit p : produits) {
        total += p.quantite * p.prix_unitaire;
    }
    return total;
}

// Fonction pour afficher la facture
void afficherFacture(vector<produit>& produits) {
    // Afficher l'en-tête de la facture
    cout << setfill('-') << setw(50) << "-" << endl;
    cout << "| Nom du produit | Quantité | Prix unitaire | Sous-total |" << endl;
    cout << setfill('-') << setw(50) << "-" << endl;

    // Afficher les détails de chaque produit
    for (produit p : produits) {
        cout << "| " << setw(14) << left << p.nom << " | "
             << setw(8) << p.quantite << " | "
             << setw(13) << fixed << setprecision(2) << p.prix_unitaire << " | "
             << setw(10) << fixed << setprecision(2) << (p.quantite * p.prix_unitaire) << " |" << endl;
    }

    // Afficher le total de la vente
    cout << setfill('-') << setw(50) << "-" << endl;
    cout << "| " << setw(34) << left << "Total" << " | "
         << setw(15) << fixed << setprecision(2) << totalVente(produits) << " |" << endl;
    cout << setfill('-') << setw(50) << "-" << endl;
}

int main() {
    // Exemple de vente avec trois produits
    vector<produit> produits = {
        {"T-shirt", 2, 9.99},
        {"Jeans", 1, 29.99},
        {"Chaussures", 1, 49.99}
    };

    // Afficher la facture
    afficherFacture(produits);

    return 0;
}
