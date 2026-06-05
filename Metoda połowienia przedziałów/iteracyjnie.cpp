#include <iostream>
using namespace std;

float f(float x) {
    return x * (x * (x - 3) + 2) - 6;
}

float polowIter() {
    float a = -10;
    float b = 10;
    float epsilon = 0.00001;
    float srodek;

    if (f(a) == 0) {
        return a;
    }
    if (f(b) == 0) {
        return b;
    }
    while ((b - a) > epsilon) {
        srodek = (a + b) / 2;
        if (f(srodek) == 0) {
            return srodek;
        }
        if (f(a) * f(srodek) < 0) {
            b = srodek;
        } else {
            a = srodek;
        }
    }
    return (a + b) / 2;
}

int main() {
    cout << "Znalezione miejsce zerowe wynosi: " << polowIter() << endl;
    return 0;
}