#include <iostream>
#include <math.h>

int main()
{
    double a;
    double b;
    double c;
    double d;
    double x1;
    double x2;
    std::cout << "podaj pierwsza liczbe ";
    std::cin >> a;
    std::cout << "podaj druga liczbe ";
    std::cin >> b;
    std::cout << "podaj trzecie liczbe ";
    std::cin >> c;

    if (a == 0)
    {
        std::cout << "funkcja nie jest kwadratowa";
    }    
    else
    {
        d = (b*b) - (4*a*c);
        std::cout << "delta jest rowna " << d;

        if (d < 0)
        {
            std::cout << "nie ma miejsc zerowych ";
        }
        if ( d == 0)
        {
            x1 = (b*(-1)) / (2*a);
            std::cout << "funkcja ma jedno miejsce zerowe rowne " << x1;
        }
        if ( d > 0)
        {
            x1 = (b*(-1) - sqrt(d)) / (2*a);
            x2 = (b*(-1) + sqrt(d)) / (2*a);
            std::cout << "funkcja ma dwa miejsca zerowe w " << x1 << " i " << x2;
        }
    }
    return 0;
}

/*int main(){
    double a;
    double b;
    double c;
    std::cout << "podaj pierwsza liczbe ";
    std::cin >> a;
    std::cout << "podaj druga liczbe ";
    std::cin >> b;
    std::cout << "podaj trzecie liczbe ";
    std::cin >> c;
    std::cout << "x jest rowny " << (c - b)/a;

    return 0;

}*/


/*int main(){

    int a;
    int b;
    std::cout << "podaj pierwsza liczbe ";
    std::cin >> a;
    std::cout << "podaj druga liczbe ";
    std::cin >> b;
    std::cout << "suma twoich liczb jest rowna " << a + b;

    return 0;
}*/


/*int main(){
    int b = 4;
    int a = 3;

    std::cout << "suma a i b to " << a + b;
}*/