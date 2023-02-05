#include <iostream>
#include <cstdlib> //contains the rand function

int main(){
    //creating pseudo-random numbers = NOT truly random (but close)
    //starts at a starting point and keeps randomly generating numbers over and over again
    srand(time(NULL)); //puts a seed number into srand as the starting point for generating random numnbers
    //if its time(NULL) then this implies that time is continuously changing so seeds will be forever changing
    //having the same seed will get u a repeat on randomly generator numbers

    int num1 = (rand() % 6) + 1; //creates a random number between 0 and 32,767
    //6 if your rolling a dice, mod by the number of possible outcomes
    int num2 = (rand() % 6) + 1; //creates a random number between 0 and 32,767
    int num3 = (rand() % 6) + 1; //creates a random number between 0 and 32,767

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n'; 
    //adding 1 b/c it starts from 0

    return 0;
}