#include <iostream>
using namespace std;

float f(float x) {
    return x * (x * (x - 3) + 2) - 6;
}

float polowRekur(float a, float b, float epsilon) {
    if (f(a) == 0.0) {
        return a;
    }
    if (f(b) == 0.0) {
        return b;
    }
    float srodek = (a + b) / 2;
    if ((b - a) <= epsilon) {
        return srodek;
    }

    if (f(a) * f(srodek) < 0) {
        return polowRekur(a, srodek, epsilon);
    }
    return polowRekur(srodek, b, epsilon);
}

int main() {
    float a = -10.0;
    float b = 10.0;
    float epsilon = 0.00001;

    cout << "Znalezione miejsce zerowe wynosi: " << polowRekur(a, b, epsilon) << endl;
    return 0;
}