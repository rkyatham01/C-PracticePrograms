#include <iostream>

//overloaded constructors = multiple constructors with same name but diff paramters

class Pizza{
    public:
        std::string topping1;
        std::string topping2;

    Pizza(){}
    
    Pizza(std::string topping1){
        this->topping1 = topping1;
    }

    Pizza(std::string topping1, std::string topping2){ //overloading constructors in the class
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

int main(){

    Pizza pizza1("pepperoni");
    Pizza pizza2("mushrooms", "peppers");
    Pizza pizza3;
    return 0;
}