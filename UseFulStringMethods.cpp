#include <iostream>

int main(){
    //https://cplusplus.com/reference/string/string/
    //Has all the other string methods for use

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name); //don't need to >> extract ws b/c nothing in buffer yet

    if(name.length() > 12){
        std::cout << "Your name cannont be over 12 characters long";
    }else{
        std::cout << "Welcome " << name;
    }
    std::cout << "\n";
    if(name.empty()){ //if theirs anything in the string or not
        std::cout << "There is nothing entered";
    }else{
        std::cout << "Hello" << name;
    }
    std::cout << "\n";
    name.clear(); //clears the string
    name.append("@gmail.com");; //appends this string to name string
    std::cout << name.at(0); //gets the character at index 0
    name.insert(0, "@"); //inserts it at position 0, (position, string(inserting))
    name.find(' '); //finds if anything string/characters are in the string (in this case looking for the first space)
    name.erase(0, 3); //deletes the first 3 characters not inclusive

}