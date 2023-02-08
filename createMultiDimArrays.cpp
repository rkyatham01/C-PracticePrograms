#include <iostream>

int main(){

    //row, col (12 elements)
    std::string cars[3][4] = {{"Mustang", "Escape", "F-150"},
                             {"Corvette", "Equinox", "Silverado"},
                             {"Challenger", "Durango", "Ram 1500"}};

    int rows = sizeof(cars) / sizeof(cars[0]);
    int cols = sizeof(cars[0]) / sizeof(cars[0][0]);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cout << cars[i][j] << " ";
        }
        std::cout << '\n'; 
    } //displaying 2 dimensional array
    return 0;
}