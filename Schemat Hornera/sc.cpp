#include <iostream>
using namespace std;

int funkcja (int st, int x, int wsp[]){
	if (st == 0){
		return wsp[0];
	}
	return x * funkcja(st-1, x, wsp) + wsp[st];
}
 
 
int main(){
	int wsp[4];
	int st;
	cout << "Podaj stopien wielomianu: " ; 
	cin >> st;

	cout << "Podaj wspolczynnik stojacy przy potedze 3: " ;
	cin >> wsp[3];
 
	cout << "Podaj wspolczynnik stojacy przy potedze 2: " ;
	cin >> wsp[2];

 
	cout << "Podaj wspolczynnik stojacy przy potedze 1: " ;
	cin >> wsp[1];
 
	cout << "Podaj wspolczynnik stojacy przy potedze 0: " ;
	cin >> wsp[0];

	int x;

	cout << "Podaj argument: " ;
	cin >> x;
	
	cout << "W( " << x << " ) = " << funkcja(st, x, wsp);
}
