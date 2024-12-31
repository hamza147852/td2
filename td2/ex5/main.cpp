#include <iostream>
#include <random>
using namespace std;

float genererReelAleatoire(float min, float max) {
    static random_device rd;  // Source de hasard
    static mt19937 gen(rd()); // G�n�rateur Mersenne Twister
    uniform_real_distribution<float> distrib(min, max);
    return distrib(gen);
}

int main() {
    // Intervalle des r�els
    float min = 1.5, max = 5.5;

    cout << "R�els al�atoires g�n�r�s :" << endl;

    // G�n�rer 5 r�els al�atoires
    for (int i = 0; i < 5; ++i) {
        float reel = genererReelAleatoire(min, max);
        cout << reel << endl;
    }

    return 0;
}
