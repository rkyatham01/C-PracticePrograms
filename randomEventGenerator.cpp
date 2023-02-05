#include <iostream>
#include <ctime> //gets access to the time function

int main(){
    //creating random events/numbers

    srand(time(0)); //uses current time as a seed
    int randNum = (rand() % 5) + 1;

    switch(randNum){ //creating random events based on random number
        case 1:
            std::cout << "You win a number sticker!\n";
            break;
        case 2:
            std::cout << "You win a number lunch!\n";
            break;
        case 3:
            std::cout << "You win a number ticket!\n";
            break;
        case 4:
            std::cout << "You win a number grade!\n";
            break;
        case 5:
            std::cout << "You win a number concert!\n";
            break;
    }
    return 0;
}