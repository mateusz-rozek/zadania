#include <iostream>
#include <random>
using namespace std;

int main(){
    int w, s;
    cout << "podaj wysokosc \n";
    cin >> w;
    cout << "podaj szerokosc \n";;
    cin >> s;
    int tab[w][s];
    int num = 1;
    int g = 0;
    int d = w - 1;
    int l = 0;
    int p = s - 1;
    while(num <= s*w){
        for(int i = l; i <= p; i++){
            tab[g][i] = num++;
        }
        g++;
        for(int i = g; i <= d;i++){
            tab[i][p] = num++;        
        }
        p--;
        if(g <= d){
            for(int i = p; i >= l; i--){
                tab[d][i] = num++;
            }
            d--;
        }
        if(l <= p){
            for(int i = d; i >= g;i--){
                tab[i][l] = num++;
            }
            l++;
        }
    }
    for(int i = 0; i < w;i++){
        for(int j = 0; j < s;j++){
            cout << tab[i][j] << "\t";
        }
        cout << endl;

    }
    return 0;
}

/*int main() {
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
}*/

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
