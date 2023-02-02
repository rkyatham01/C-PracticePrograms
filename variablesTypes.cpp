#include <iostream> //includes header files for a bunch of input/output operations
//installed mingw to get g++ (compiler)
//Pacman which is a package management utility that tracks installed packages on a Linux system. 

int main(){
    std::cout << "Hello World!" << std::endl; //standard character output
    std::cout << "This is another test sentence" << std::endl;
    int x; //declaration
    x = 5;
    //truncates integer if a decimal (floors it)
    double price = 10.50;
    double gpa = 3.52; //doubles
    char grade = 'A'; //characters (gets warning if you put more than one character
    //boolean has two states (True / False)
    bool student = true; //can be true or false (2 states)
    std::string name = "Rishith"; //standard name space contains String type and functions
    std::cout << name;
    return 0; //0 means no problems (1) means problem occured
}