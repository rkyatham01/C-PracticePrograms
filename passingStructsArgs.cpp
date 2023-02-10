#include <iostream>
//passing structs as args 

struct Car{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);

int main(){ //structs are pass by value instead of pass by reference
    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "red";

    car2.model = "Corvette";
    car2.year = 2024;
    car2.color = "blue";
    
    printCar(car1);
    printCar(car2);
    return 0;
}

void printCar(Car &car){
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}