#include <iostream>

template <typename T, typename U> //template parameter declaration
//can make multiple datatype 

//creating a function template 
//this will work with any data type instead of overloading each time
auto max(T x, U y){ //set up to receive up to 2 diff datatypes as args
    return (x > y) ? x : y;
} //using auto, the compiler will deduce what the compile type should be
//mostly probably upcasts to the higher types

//simplies for overloading 
//Creates 1 function for any data type

int main(){
    std::cout << max(1.1,2.1) << '\n';
    return 0;
}