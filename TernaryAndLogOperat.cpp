#include <iostream>

//ternary operators and logical operators
int main(){
    //condition ? expression1 : expression2
    int grade = 75;
    grade >= 60 ? std::cout << "You pass!" : std::cout << "you fail";
    int number = 9;
    std::cout << "\n";
    number % 2 == 1 ? std::cout << "This number is odd" : std::cout << "This number is even";
    
    //logical operators
    int temp;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    //There is && operator, || operator and ! which is the negation operator
    if(temp > 0 && temp < 30){
      std::cout << "temperature is between 0 and 30";
    }else{
      std::cout << "falls out of range";
    }

    return 0;
}