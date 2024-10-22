#include <iostream>
#include <random>
using namespace std;

int main() {
	const int n = 10;
	int tab[10][10];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			tab[i][j] = (i + 1)*(j + 1);
			cout << tab[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

/*int main() {
	double pod;
	const int n = 5;
	double tab[n];
	for (int i = 0; i < n; i++) {
		tab[i] = double(rand()) / RAND_MAX;
		cout << tab[i] << endl;
	}
	for (int i = 0; i < n/2; i++) {
		pod = tab[n - 1 - i];
		tab[n - 1 - i] = tab[i];
		tab[i] = pod;
	}
	for (int i = 0; i < n; i++) {
		cout << tab[i] << endl;
	}
	return 0;
}*/

/*int main() {
	const int n = 5;
	double tab[n];
	double min;
	for (int i = 0; i < n; i++) {
		tab[i] = double(rand()) / RAND_MAX;
		cout << tab[i] << endl;
		if (i == 0){
			min = tab[i];
		}
		else{
			if (tab[i] < min){
				min = tab[i];
			}

		}

	}
	cout << "najmniejsza liczba to " << min;
	return 0;
}*/

/*int main() {
	const int n = 5;
	double tab[n];
	for (int i = 0; i < n; i++) {
		tab[i] = double(rand()) / RAND_MAX;
		cout << tab[i] << endl;
	}
	return 0;
}*/