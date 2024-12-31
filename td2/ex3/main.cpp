#include <iostream>
using namespace std;


        void incrementerParAdresse(int* ptr) {
            (*ptr)++;
        }

        void incrementerParReference(int& ref) {
            ref++;
        }

        void permuterParAdresse(int* a, int* b) {
            int temp = *a;
            *a = *b;
            *b = temp;
        }

        void permuterParReference(int& a, int& b) {
            int temp = a;
            a = b;
            b = temp;
        }

int main() {
    int x = 5, y = 10;

    cout << "Avant incrémentation (par adresse) : x = " << x << endl;
    incrementerParAdresse(&x);
    cout << "Après incrémentation (par adresse) : x = " << x << endl;

    cout << "Avant incrémentation (par référence) : y = " << y << endl;
    incrementerParReference(y);
    cout << "Après incrémentation (par référence) : y = " << y << endl;


    int a = 3, b = 7;
    cout << "\nAvant permutation (par adresse) : a = " << a << ", b = " << b << endl;
    permuterParAdresse(&a, &b);
    cout << "Après permutation (par adresse) : a = " << a << ", b = " << b << endl;

    int c = 15, d = 20;
    cout << "\nAvant permutation (par référence) : c = " << c << ", d = " << d << endl;
    permuterParReference(c, d);
    cout << "Après permutation (par référence) : c = " << c << ", d = " << d << endl;

    return 0;
}
