#include <iostream>

double getTotal(double prices[], int size); //declaration

int main(){
    
    std::string students[] = {"Spongebob", "Patrick", "Squidward"};
    for(std::string student : students){
        std::cout << student << '\n'; //iterating thru array 
    }
    //passing arrays to functions

    double prices[] = {49.99, 15.05, 75, 9.99};
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = getTotal(prices, size);
    std::cout << "$" << total;
    return 0;
    
}

double getTotal(double prices[], int size){ //passing array to a function decays into a pointer
    //points to the address of where the array begins
    //You don't know the size of the array anymore
    //so we pass the size too technically
    double total = 0;
    for(int i=0; i < size; i++){
        total += prices[i];
    }
    return total;
}