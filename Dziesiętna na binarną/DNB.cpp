#include <iostream>

using namespace std;

int main() {
    int liczba;
    cout << "Podaj liczbe dziesietna: ";
    cin >> liczba;

    if (liczba == 0) {
        cout << "Liczba 0 po zamianie na postac binarna: 0" << endl;
        return 0;
    }

    int tab[31];
    int i = 0;
    int kopia_liczby = liczba;

    while (liczba > 0) {
        tab[i] = liczba % 2;
        i++;
        liczba = liczba / 2;
    }

    cout << "Liczba " << kopia_liczby << " po zamianie na postac binarna: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << tab[j];
    }

    cout << endl;

    return 0;
}
