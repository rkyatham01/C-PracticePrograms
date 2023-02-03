#include <iostream>

int main(){
    int students = 20;
    students += 1; //shortened way of adding
    //students++ another way of adding a 1
    students -= 1;
    //students-- another way of subtracting a 1
    students *= 2; //shortened way of multiplying by 2
    students /= 2; //shortened way of dividing by 2
    //truncated or not based on double or int (data type)
    int remainder = students % 2; //modulus operator
    std::cout << students;
    return 0; //success
}