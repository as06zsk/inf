#include <iostream>
using namespace std;

int SzybkiePotRekurencyjne(int a, int n){
	int wynik;

	if (n == 0){
	return 1;
	}
	if (n % 2 == 0){
	wynik = SzybkiePotRekurencyjne(a * a, n / 2);
	}
	if (n % 2 == 1){
	wynik = a * SzybkiePotRekurencyjne(a, n - 1);
	}
	return wynik;

}
int main(){
    int a, n;

    cout << "Podaj bazę (a): ";
    cin >> a;

    cout << "Podaj wykładnik (n): ";
    cin >> n;

    int odp = SzybkiePotRekurencyjne(a, n);

    cout << a << "^" << n << " = " << odp;
}
