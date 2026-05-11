#include <iostream>
using namespace std;

int funkcja (int st, int arg, int wsp[]){
	if (st == 0){
		return wsp[0];
	}
	return arg * funkcja(st-1, arg, wsp) + wsp[st];
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

	int arg;

	cout << "Podaj argument: " ;
	cin >> arg;
	
	cout << "W( " << arg << " ) = " << funkcja(st, arg, wsp);
}