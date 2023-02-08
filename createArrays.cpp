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
}