#include <iostream>

int main(){
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "********* CALCULATOR PROGRAM *********" << '\n';
    
    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter #1 ";
    std::cin >> num1;

    std::cout << "Enter #2 ";
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "result: " << result << '\n';
            break; //breaks from switch
        case '-':
            result = num1 - num2;
            std::cout << "result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "result: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            std::cout << "result: " << result << '\n';
            break;
        default:
            std::cout << "None of it matches any operator";
    }

    std::cout << "**************************************";
    return 0; //code ran succesfully

}