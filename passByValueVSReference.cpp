#include <iostream>

void swamp(std::string &x, std::string &y);

int main(){
    std::string x = "Kool-Aid";
    std::string y = "Water";

    swap(x,y);

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';
    
    return 0;
}

// void swamp(std::string x, std::string y){ //passing by value to functions
//     //passing copies and not changing the originals
//     std::string temp;
//     temp = x;
//     x = y;
//     y = temp;
// }

void swamp(std::string &x, std::string &y){ //passing by reference
    //pass by reference passes a memory address (of where the value is located)
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}