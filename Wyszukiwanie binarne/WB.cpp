#include <iostream>
using namespace std;

int wyszukiwanie(int tab[], int szukana) {
int l = 0;
int p = 15;
int sr=(l+p)/2;

while (l <= p){
	if (tab[sr] == szukana){
		return sr;
	}else if (tab[sr] > szukana){
		p = sr - 1;
	}else{
		l = sr + 1;
	}
	sr = (l+p)/2;
}
	return -1;
}


int main() {
	int szukana;
	int tab[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

	cout << "Podaj liczbe ktora chcesz znalezc: ";
	cin >> szukana;

	int pozycja = wyszukiwanie(tab, szukana);

    if (pozycja != -1) {
        cout << "Liczba " << szukana
             << " wystpuje w zbiorze w komorce o indeksie: "
             << pozycja << endl;
    } else {
        cout << "Liczba nie wystepuje w zbiorze." << endl;
    }

	return 0;
}
