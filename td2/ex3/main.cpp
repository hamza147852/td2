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

    cout << "Avant incr�mentation (par adresse) : x = " << x << endl;
    incrementerParAdresse(&x);
    cout << "Apr�s incr�mentation (par adresse) : x = " << x << endl;

    cout << "Avant incr�mentation (par r�f�rence) : y = " << y << endl;
    incrementerParReference(y);
    cout << "Apr�s incr�mentation (par r�f�rence) : y = " << y << endl;


    int a = 3, b = 7;
    cout << "\nAvant permutation (par adresse) : a = " << a << ", b = " << b << endl;
    permuterParAdresse(&a, &b);
    cout << "Apr�s permutation (par adresse) : a = " << a << ", b = " << b << endl;

    int c = 15, d = 20;
    cout << "\nAvant permutation (par r�f�rence) : c = " << c << ", d = " << d << endl;
    permuterParReference(c, d);
    cout << "Apr�s permutation (par r�f�rence) : c = " << c << ", d = " << d << endl;

    return 0;
}
