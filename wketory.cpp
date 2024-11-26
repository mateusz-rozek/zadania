#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <random>
using namespace std;

vector<int> wektor(int a) {
	vector <int> n;
	for (int i = 0; i < a; i++) {
		n.push_back(rand() % 100);
	}
	return n;
	

}
void wypisz(vector <int> n) {
	for (int i = 0; i < n.size(); i++) {
		cout << n[i] << " ";
	}
}
void min_max(vector <int> & n, int& max, int &min) {
	min = n[0];
	max = n[0];
	for (int i = 0; i < n.size(); i++) {
		if (n[i] > max) {
			max = n[i];
		}
		if (n[i] < min) {
			min = n[i];
		}
	}
}
void macierz() {
	vector<vector<int>> M;
	vector<int> row;

	M.push_back(row);

	M[i][j]


int main(){
	int a, min=0, max=0;
	vector <int> n;
	cout << "podaj dlugosc wektora \n";
	cin >> a;
	n = wektor(a);
	wypisz(n);

	min_max(n, max, min);
	cout << "twoje minimum to " << min;
	cout << "twoje maksimum to " << max;
}