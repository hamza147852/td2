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
    cout << "x et y sont égaux ? " << (testparvaleur(x, y) ? "Oui" : "Non") << endl;


    cout << "\nTest par adresse : " << endl;
    cout << "x et y sont égaux ? " << (testparadresse(&x, &y) ? "Oui" : "Non") << endl;

    cout << "\nTest par référence : " << endl;
    cout << "x et y sont égaux ? " << (testparreference(x, y) ? "Oui" : "Non") << endl;

    return 0;
}
