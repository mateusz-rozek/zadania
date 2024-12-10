#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <string>
#include <tuple>
#include <math.h>
using namespace std;

struct punkt {
	double x, y;
};
struct prostokat {
	punkt p1;
	punkt p2;
};

struct kolo {
	punkt srodek;
	double r;
};
double przekatna(punkt p1, punkt p2) {
	double odl;
	odl = sqrt((pow(p1.x - p2.x, 2 )) + (pow(p1.y - p2.y,2 )));
	return odl;

}
double pole(prostokat pr , prostokat pr1) {
	double bok1;
	double bok2;
	if (p1.x >= p2.x) {
		bok1 = p1.x - p2.x;
	}
	else {
		bok1 = p2.x - p1.x;
	}
	if (p1.y >= p2.y) {
		bok2 = p1.y - p2.y;
	}
	else {
		bok2 = p2.y - p1.y;
	}
	double p = bok1 * bok2;
	return p;

}
double pole1(punkt p3, punkt p4) {
	double bok3;
	double bok4;
	if (p3.x >= p4.x) {
		bok3 = p3.x - p4.x;
	}
	else {
		bok3 = p4.x - p3.x;
	}
	if (p3.y >= p4.y) {
		bok4 = p3.y - p4.y;
	}
	else {
		bok4 = p4.y - p3.y;
	}
	double p = bok3 * bok4;
	return p;
}
int porownaj(punkt p1, punkt p2, punkt p3, punkt p4) {
	int odp;
	if (pole(p1, p2) > pole1(p3, p4)) {
		odp = 1;
	}
	else {
		odp = 2;
	}
	return odp;
}
double pole_k(kolo pol) {
	double pole;
	pole = 3.14 * (pow(pol.r, 2));
	return pole;
}
double odleglosc_kol(kolo pol,kolo pol1){

}
int main() {
	punkt p1{ 0, 0 };
	punkt p2{ 1, 1 };
	punkt p3{ 6, 7 };
	punkt p4{ 1, 0 };
	kolo r{ 0,0,1 };
	kolo srodek{ 1, 2 };
	cout << przekatna(p1, p2) << "\n";
	cout << "pole pierwszego "<< pole(p1, p2) << "\n";
	cout << "pole drugiego " << pole1(p3, p4) << "\n";
	cout << "wieksze pole ma prostokat " << porownaj(p1, p2, p3, p4) << '\n';
	cout << "pole kola to " << pole_k(r);
}