#include <iostream>

int main(){
    // memory address = a location in memory where data is stored
    // a memory address can be accessed with & (dereferencing)
    // & (address-of operator)

    std::string name = "Bro";
    int age = 21;
    bool student = true;

    std::cout << &name << '\n';
    std::cout << &student << '\n'; 
    //where it is in memory / street addresses
    return 0;
}