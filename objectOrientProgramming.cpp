#include <iostream>

class Human{
    public: //access modifier
        std::string name;
        std::string occuptation;
        int age;
        
        void eat(){ //methods/functions belonging to the class
            std::cout << "This person is eating\n";
        }
        void drink(){
            std::cout << "This person is drinking\n";
        }
        void sleep(){
            std::cout << "This person is sleeping\n";
        }
};

class Car{ //acts as a blueprint for the Car object
    public: //accesss modifier
        std::string make;
        std::string model;
        int year;
        std::string color;

        void accelerate(){
            std::cout << "accelerating the car";
        }

        void brake(){
            std::cout << "you stepped on the break";
        }
};

//objects = a collection of attributes and methods
//can be used to mimic real world items(ex. Phone, Book, Dog)

int main(){
    Human human1; //creates an instance of Human object
    human1.name = "Rick";
    human1.occuptation = "scientist";
    human1.age = 70;
    // std::cout << "This person is : " << human1.name << '\n';
    // human1.eat();
    // human1.drink();
    // human1.sleep();
    Car car1;
    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "silver";
    return 0;
}