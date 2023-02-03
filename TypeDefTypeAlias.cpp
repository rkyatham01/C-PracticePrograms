#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string,int>> pairlist; //shortens it to pairlist_t
//convention to use _t or underscore something

typedef std::string text_t;
typedef int number_t;
//using text_t = std::string; (more popular nowadays for templates)
//using number_t = int;

//Typedef : using an alias for another data type
//helps with readiablity and reduces typos
int main(){
    text_t newName = "Rishith";
    std::cout << newName;
    number_t age = 5;
    std::cout << age;
    return 0;
} 