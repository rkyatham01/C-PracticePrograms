#include <iostream>

int main(){
    double age;
    std::cout << "Enter Age: ";
    std::cin >> age;

    if(age > 18){
        std::cout << "Above 18 years old" << '\n';
    }else if(age < 18){
        std::cout << "Below 18 years old" << '\n';
    }else{
        std::cout << "Exactly 18 years old" << '\n';
    }
    //Switch statements (compares one value against many matching cases)
    int month;
    std::cout << "Enter month (1-12): ";
    std::cin >> month;

    switch(month){ //takes one value and compares all matching cases against it
        case 1:
            std::cout << "It is January";
            break; //breaks out of the switch, else it goes to else statement
        case 2:
            std::cout << "It is Febuary";
            break;
        case 3:
            std::cout << "It is March";
            break;
        default: //if theirs no matching cases
            std::cout << "None of the months above";
    } 

    return 0;
}