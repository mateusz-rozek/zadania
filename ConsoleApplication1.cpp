#include <iostream>
#include <fstream>
#include <random>
#include <string>
#include <vector>
using namespace std;

void wyp1(int n) {
	vector<int> vec;
	ifstream plik("plik.txt");
	string linia;
	int b;
	for (int i = 0; i < n; i++) {
		while (getline(plik, linia)) {
			b = linia;
			vec.push_back(b);
		}
	}

}

void wyp() {
	ifstream plik("plik.txt");
	string linia;
	while (getline(plik, linia)) {
		cout << linia << "\n";
	}
	plik.close();
}

void gen(int n) {
	ofstream plik("plik.txt");
	for (int i = 0; i < n; i++) {
		plik << i << "\n";
	};
}

int main() {
	int n, a;
	cout << "podaj ilosc znakow \n";
	cin >> n;
	gen(n);
	wyp();
	wyp1(n);
}