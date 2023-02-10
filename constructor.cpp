#include <iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;
    Student(std::string name, int age, double gpa){ //the constructor of the class (inital setups)
        //use this keyword to assign
        //use only this-> if it has the class variable names have the same name as the constructor paramter names
        this->name = name; //setting initial properties with constructor
        this->age = age;
        this->gpa = gpa;
    }
};

int main(){
    Student student1("Spongebob", 25, 3.2);
    return 0;
}