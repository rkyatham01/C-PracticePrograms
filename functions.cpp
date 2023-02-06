#include <iostream>

//programs run Top down so compiler needs to recognize this function b4 calling it

void happyBirthday(std::string name, int age); //creating a prototype declaring function

int main(){

    std::string name = "Bro";
    int age = 21;
    happyBirthday(name, age); //sending argument
    return 0;
}

void happyBirthday(std::string name, int age){
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "You are " << age << " years old!" << '\n';
}