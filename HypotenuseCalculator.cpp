#include <iostream>
#include <cmath>

// Hypotenuse calculator
int main(){
    double a;
    double b;
    double c;

    std::cout << "Enter side A: ";
    std::cin >> a;

    std::cout << "Enter side B: ";
    std::cin >> b;

    a = pow(a,2);
    b = pow(b,2);
    c = sqrt(a+b);

    //c = sqrt(pow(a,2) + pow(b,2))
    std::cout << "Side c is " << c;
    return 0;
}