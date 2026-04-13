#include <iostream>
#include <cmath>

using namespace std;

int wyznaczanieLiczbPierwszych(int n) {
    if (n < 2) {
        return 0;
    }

    for (int d = 2; d <= sqrt(n); d++) {
        if (n % d == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;

    cout << "Podaj liczbe: ";
    cin >> n;

    if (wyznaczanieLiczbPierwszych(n) == 1) {
        cout << n << " jest liczba pierwsza." << endl;
    } else {
        cout << n << " nie jest liczba pierwsza." << endl;
    }

    return 0;
}
