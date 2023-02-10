#include <iostream>

// inheritance = a class can receive attributes and methods from another class
//children inherits from parents
//helps reuse code to avoid redundancy

class Animal{
    public:
        bool alive = true;
    void eat(){
        std::cout << "This animal is eating\n";
    }
};

class Dog : public Animal{ //states dog class inherits from Animal class
    public:
        void bark(){
            std::cout << "The dog goes woof!\n";
        }
};

class Cat : public Animal{ //Cat class inherits from Animal class
    public:
        void meow(){
            std::cout << "The cat goes meow!\n";
        }
};

int main(){
    Dog dog;
    dog.eat(); //exists b/c its inheriting from the animal class
    dog.bark(); //inherits and has its own individual atributes/functions
    std::cout << "\n";
    Cat cat;
    cat.eat();
    cat.meow();
    return 0;
}