#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main(){
    std::string name;
    std::string fullname;
    std::cout << "What's your name?: "; //problem is we stop reading after space
    std::getline(std::cin >> std::ws, fullname); //reads the line from stream into string
    //getline (what you are doing, where are you extracting this into)
    // >> std::ws will remove whitespaces and new lines before user input
    std::cout << fullname << '\n';
    std::cin >> name;
    std::cout << "Your first name is " << name;
    return 0;
}