//Sorting Array C++ (Bubble sort)
#include <iostream>

void sort(int array[], int size);

int main(){

    int array[] = {10,1,9,2,8,3,7,4,6,5};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);

    for(int element: array){
        std::cout << element << " ";
    }

    return 0;
}

void sort(int array[], int size){
    int temp; //n^2 Time complexity (Bubble Sort)
    for(int i = 0; i < size-1; i++){ //its size-1 b/c we don't need to compare the last element to anything in bubble sort
    //acts as the number of iterations
        for(int j = 0; j < size-1-i; j++){ //because each pass gets the largest element to the end of the array
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}