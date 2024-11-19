#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
using namespace std;

void 

int main(int argc , char* argv[]) {
	string nazwa_wej;
	string nazwa_wyj;
	string projekt;
	string key;
	ifstream help;
	for (int i=0; i < argc; i++) {
		cout << argv[i] << ' ';
		if (strcmp(argv[i], "-i")==0) {
			nazwa_wej = argv[i + 1];
		}
		if (strcmp(argv[i], "-o") == 0) {
			nazwa_wyj = argv[i + 1];
		if (strcmp(argv[i], "-key") == 0) {
			key = argv[i + 1];
		}
		if (strcmp(argv[i], "-h") == 0) {
			help.open("help.txt");
			string line;
			while (getline(help, line)) {
				cout << line << endl;
			}
			help.close();
		}
	}

}
