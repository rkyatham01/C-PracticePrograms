#include <iostream>

//dynamic memory = Memory that is allocated after the program is already compiled & running
//use new operator to allocate memory in the heap(during program runtime) rather than the stack

int main(){
    int *pNum = NULL; //no value pointer
    //pointing to the heap
    pNum = new int; //has a address that points to a memory location
    *pNum = 21;

    //this will delete it from the heap the object 
    delete pNum; //should use whenever we use new operator

    char *pGrades = NULL;
    int size;
    std::cout << "How many grades to enter in?: ";
    std::cin >> size;

    pGrades = new char[size];

    for(int i = 0; i < size; i++){
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i]; //putting it into the char array at the heap
    }

    for(int i = 0; i < size; i++){
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades; //deleting array to prevent memory leak

    return 0;
}