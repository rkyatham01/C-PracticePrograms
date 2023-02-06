#include <iostream>
//C++ and Java supports overloading and Python does not
//each functions signature has to be unique

void bakePizza();
void bakePizza(std::string topping1);

int main(){
    std::string topping1 = "pepperoni";
    bakePizza();
    bakePizza(topping1); //overloaded function
    return 0;
}

void bakePizza(){
    std::cout << "Here is your pizza!\n";
}

void bakePizza(std::string topping1){ //function name + paramter is known as a functions signature
    std::cout << "Here is your " << topping1 << " pizza!\n";
}