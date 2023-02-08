#include <iostream>

int main(){

    std::string car[] = {"Corvette", "Mustang", "Camry"}; //add [] after variable and brackets {} over the list
    //arrays should be of the same data type in C++ it is homogeneous
    std::cout << car << '\n'; //has the memory address of the array
    std::cout << car[0] << '\n'; //access the first element of array

    double prices[] = {25.2, 31.5, 15.5}; //prices of stuff
    std::cout << prices[0] << '\n';
    //could always set a default size too double prices[4] 
    //prices[0] = smth
    //prices[1] = smth assigns
    //sizes of bytes
    std::string name = "Rish";
    sizeof(name); //32 bytes
    //double is 8 bytes of memory
    //boolean takes 1 byte of memory
    //char takes 1 byte of memory
    //integer takes 4 bytes of memory
    //array takes (type) * num of elements
    std::string nameArr[] = {"FirstName", "SecondName", "ThirdName"};
    std::cout << sizeof(nameArr) << '\n';
    std::cout << sizeof(std::string) << '\n';
}