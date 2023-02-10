#include <iostream>

void walk(int steps);

//factorial function
int factorial(int num);

int main(){
    //recursion advantages
    //less code to write, cleaner, useful for sorting and searching algorithms
    //could always use iterative or recursive approach
    //walk(100);
    std::cout << factorial(10);
    return 0;
}

// void walk(int steps){ iterative approach
//     for(int i = 0; i < steps; i++){
//         std::cout << "You take a step" << '\n';
//     }
// }

void walk(int steps){ //recursive approach (adding frames to the stack)
    if(steps > 0){
        std::cout << "You take a step!\n";
        walk(steps - 1); 
    }
}

// int factorial(int num){ //iterative approach
//     int result = 1;
//     for(int i = 1; i <= num; i++){
//         result = result * i;
//     }
//     return result;
// }

int factorial(int num){ //recursive approach
    if(num > 1){
        return num * factorial(num-1);
    }else{
        return 1;
    }
}