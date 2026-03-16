#include <iostream>
using namespace std;

int potegowanie(int a, int n){
    int wynik = 1;

    while (n > 0){
        if (n % 2 == 1){
            wynik = wynik * a;
        }

        a = a * a;
        n = n / 2;
    }

    return wynik;
}

int main(){
    int a, n;

    cout << "Podaj bazę (a): ";
    cin >> a;

    cout << "Podaj wykładnik (n): ";
    cin >> n;

    int odp = potegowanie(a, n);

    cout << a << "^" << n << " = " << odp;
}

* * * * * * * * * * * * * * * * * * * *

#include <iostream>
using namespace std;

int potegowanie(int a, int n){
	int wynik;

	if (n == 0){
	return 1;
	}
	if (n % 2 == 0){
	wynik = potegowanie(a * a, n / 2);
	}
	if (n % 2 == 1){
	wynik = a * potegowanie(a, n - 1);
	}
	return wynik;

}
int main(){
    int a, n;

    cout << "Podaj bazę (a): ";
    cin >> a;

    cout << "Podaj wykładnik (n): ";
    cin >> n;

    int odp = potegowanie(a, n);

    cout << a << "^" << n << " = " << odp;
}
