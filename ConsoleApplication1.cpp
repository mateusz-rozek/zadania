#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int num_a(string tekst, int a = 0) {
	for (int i = 0; i < tekst. length(); i++) {
		if (tekst[i] == 'a' || tekst[i] == 'A') {
			a++;
		}
	}
	return a;
}

double distance(double x1, double x2, double y1, double y2) {
	double dis = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	return dis;
}

double beta(double bok, double n) {
	double wynik = pow(bok, n);
	return wynik;
}
double alfa(double bok) {;
	double wynik = pow(bok, 3);
	return wynik;
}
	
int main() {
	int a = 0;
	string tekst;
	getline(cin, tekst);
	cout << num_a(tekst, a);
}