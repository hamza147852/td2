#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

void dessiner_sapin(int hauteur_cone, int hauteur_tronc, int largeur_tronc, int nb_boules) {
    srand(time(nullptr)); // Initialisation du g�n�rateur de nombres al�atoires

    // Dessiner le c�ne
    for (int i = 1; i <= hauteur_cone; ++i) {
        // Cr�er une ligne avec des espaces
        string ligne;

        // Ajouter des espaces au d�but de la ligne
        for (int j = 0; j < (2 * hauteur_cone - 1); ++j) {
            ligne += ' ';
        }

        // Remplir avec des �toiles
        for (int j = hauteur_cone - i; j < hauteur_cone + i - 1; ++j) {
            ligne[j] = '*';
        }

        // Ajouter des boules al�atoirement
        for (int j = 0; j < ligne.size(); ++j) {
            if (nb_boules > 0 && ligne[j] == '*' && rand() % 4 == 0) {
                ligne[j] = 'O'; // Boules repr�sent�es par 'O'
                nb_boules--;
            }
        }

        cout << ligne << endl; // Afficher la ligne du c�ne
    }

    // Dessiner le tronc
    int position_tronc = (2 * hauteur_cone - largeur_tronc) / 2;
    for (int i = 0; i < hauteur_tronc; ++i) {
        // Afficher le tronc centr�
        cout << string(position_tronc, ' ') << string(largeur_tronc, '|') << endl;
    }
}

int main() {
    int hauteur_cone = 6;
    int hauteur_tronc = 3;
    int largeur_tronc = 3;
    int nb_boules = 8;

    dessiner_sapin(hauteur_cone, hauteur_tronc, largeur_tronc, nb_boules); // Dessiner le sapin

    return 0;
}
