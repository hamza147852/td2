#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char a;
    double nombre1, nombre2, resultat;

    do {
        system("cls");

        cout << "\n***** CALCULATRICE *****\n";
        cout << "1. Addition \n";
        cout << "2. Soustraction \n";
        cout << "3. Multiplication \n";
        cout << "4. Division \n";
        cout << "5. Quitter\n";
        cout << "Choisissez l'opération (1, 2, 3, 4 ou 5) : ";
        cin >> a;

        switch (a) {
            case '1':
                cout << "Entrez deux nombres : ";
                cin >> nombre1 >> nombre2;
                resultat = nombre1 + nombre2;
                cout << "Résultat : " << resultat << endl;
                break;

            case '2':
                cout << "Entrez deux nombres : ";
                cin >> nombre1 >> nombre2;
                resultat = nombre1 - nombre2;
                cout << "Résultat : " << resultat << endl;
                break;

            case '3':
                cout << "Entrez deux nombres : ";
                cin >> nombre1 >> nombre2;
                resultat = nombre1 * nombre2;
                cout << "Résultat : " << resultat << endl;
                break;

            case '4':
                cout << "Entrez deux nombres : ";
                cin >> nombre1 >> nombre2;
                if (nombre2 != 0) {
                    resultat = nombre1 / nombre2;
                    cout << "Résultat : " << resultat << endl;
                } else {
                    cout << "Erreur : Division par zéro impossible." << endl;
                }
                break;

            case '5':
                cout << "Au revoir !\n";
                break;

            default:
                cout << "Choix invalide. Veuillez réessayer.\n";
        }


        if (a != '5') {
            cout << "\nAppuyez sur une touche pour continuer...";
            cin.ignore();
            cin.get();
        }

    } while (a != '5');

    return 0;
}

