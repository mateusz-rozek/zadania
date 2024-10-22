#include <iostream>
#include <cmath>

/*int main(){
    double a1;
    double q;
    int n;
    char o;
    double sum = 0;
    double sum1 = 0;
    std::cout << "podaj pierwszy wyraz ciagu \n";
    std::cin >> a1;
    std::cout << "podaj iloraz \n";
    std::cin >> q;
    do{
        std::cout << "ile wyrazow ciagu chcesz otrzymac \n";
        std::cin >> n;
        if (q == 1) {
            sum = sum + (a1 * n);
        }else {
            sum = sum + (a1 * (1 - std::pow(q, n)) / (1 - q));
            }
        for(int i=0; i < n; i++){
            double res= a1 * std::pow(q, i);
            std::cout << "a" << i+1 << " " << res << std::endl;
        }
        sum1 = sum1 + sum;
        std::cout << "suma to " << sum1 << "\n";
        std::cout << "czy chcesz kontynuowac? (t/n) \n";
        std::cin >> o;
    }while (o != 'n');
}*/


/*using namespace std;

int main(){
    int l, u;
    char ans;
    cout << "wymysl swoja liczbe \n";
    cout << "podaj dolny zakres \n";
    cin >> l;
    cout << "podaj gorny zakres \n";
    cin >> u;
    if (l >= u) {
        cout << "Dolny zakres musi byc mniejszy od gornego zakresu.\n";
        return 1;
    }
    while (u>l){
        int h = (u+l)/2;
        cout << "czy twoja liczba jest mniejsza od " << h << "(t/n) \n";
        cin >> ans;
        if (ans == 't')
            u = h;
        if (ans == 'n')
            l = h + 1;
    }
    cout << "twoja liczba to " << l;
    return 0;
}*/


/*int main()
{	
	int o;
	double e;
	double sum = 0;
	int l = 0;
	double min=0;
	double max=0;
	do
	{
		std::cout << "podaj liczbe ";
		std::cin >> e;
		sum = sum + e;
		l++; 
		if (l == 1) {
			min = e;
			max = e;
		}
		else {
			if (e < min)
			{
				min = e;
			}
			if (e > max)
			{
				max = e;
			}
		}
		std::cout << "czy chcesz kontynuować? tak-1 nie-2 ";
		std::cin >> o;
	} while (o != 2);
	std::cout << "srednia to " << sum / l << std::endl;
	std::cout << "minium to " << min << std::endl;
	std::cout << "maksimum to " << max << std::endl;
}*/




/*int main()
{
	int i;
	int n;
	std::cout << "podaj ilosc liczb ";
	std::cin >> n;
	std::cout << "pierwsze 10 liczb naturalnych ";
		while(n > 0)		{
			std::cout << n << " ";
			n--;
		}

}*/


/*int main()
{
	int i;
	int n;
	std::cout << "podaj ilosc liczb ";
	std::cin >> n;
	std::cout << "pierwsze 10 liczb naturalnych to ";
	for (int i = 0; i <= n; i++)
		std::cout << i << " ";
}*/
