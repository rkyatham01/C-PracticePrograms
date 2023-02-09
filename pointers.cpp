#include <iostream>

int main(){
    //pointer : variable that stores a memory address of another variable
    // & address-of operator
    // * dereference operator (memory address -> value)
    std::string name = "Bro";

    std::string *pName = &name; //creates a pointer to that address of name variable
    //std::cout << pName; // you would get memory address as the value
    //std::cout << *pName; //accesses the value at the given memoy address
    int age = 21;
    int *pAge = &age;
    std::cout << *pAge; //dereferences a memory address
    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};
    std::string *pFreePizzas = freePizzas; //setting pointer to the array
    //NUll pointer (a special value that means something has no value)
    // nullptr = keyword
    int *pointer = nullptr;
    int x = 123;
    pointer = &x;
    std::cout << '\n';

    if(pointer == nullptr){
        std::cout << "This is a null pointer";
    }else{
        std::cout << "There is a pointer assigned";
    }
    //make sure your code does not point to free memory b/c
    //this leads to undefined behavior
    return 0;
}