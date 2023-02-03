#include <iostream>
#include <cmath> //header file that has all the other math functions
//once you include, you can just use the functions implicitly
//https://cplusplus.com/reference/cmath/ for all the other math related functions

int main(){
    double x = 3;
    double y = 4;
    double zMax; //initializes
    double zMin;
    double zPow;
    double zSquareRt;

    zMax = std::max(x,y); //takes in x and y and the max of it
    zMin = std::min(x,y); //takes the minimum between the two values
    zPow = pow(2,4); //will raise 2^4
    zSquareRt = sqrt(9);
    //z = abs(value)
    //z = round(3.14) will round to nearest integer
    //cieling function z = ceil(3.14) rounds to 4
    //floor function z = floor(3.14) rounds to 3
    return 0;
}