#include <iostream>

//basically becomes a datatype of mapped constant of variable:integer
enum Day {monday = 0, tuesday = 1, wednesday = 2, thursday = 3, friday = 4, saturday = 5, sunday = 6};

enum Flavor {vanilla, chocolate, strawberry, mint};

enum Color {red, orange, yellow, green, blue, purple};
//enums = user-defined data type that consists of paired named-integer constants

int main(){
    Day today = wednesday; //setting it to a enum
    
    switch(today){
        case monday: //changing to enum data type
            std::cout << "It's Monday!\n";
            break;
        case tuesday:
            std::cout << "It's Tuesday!\n";
            break;
        case wednesday:
            std::cout << "It's Wendesday!\n";
            break;
        case thursday:
            std::cout << "It's Thursday!\n";
            break;
        case friday:
            std::cout << "It's Friday!\n";
            break;
        case saturday:
            std::cout << "It's Saturday!\n";
            break;
        case sunday:
            std::cout << "It's Sunday!\n";
            break;
    }
    return 0;
}