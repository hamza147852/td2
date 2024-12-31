#include <iostream>
using namespace std;


bool testparvaleur(int a, int b) {
    return a == b;
}


bool testparadresse(const int* a, const int* b) {
    return *a == *b;
}


bool testparreference(const int& a, const int& b) {
    return a == b;
}

int main() {
    int x = 5, y = 6;

    cout << "Test par valeur : " << endl;
    cout << "x et y sont �gaux ? " << (testparvaleur(x, y) ? "Oui" : "Non") << endl;


    cout << "\nTest par adresse : " << endl;
    cout << "x et y sont �gaux ? " << (testparadresse(&x, &y) ? "Oui" : "Non") << endl;

    cout << "\nTest par r�f�rence : " << endl;
    cout << "x et y sont �gaux ? " << (testparreference(x, y) ? "Oui" : "Non") << endl;

    return 0;
}
