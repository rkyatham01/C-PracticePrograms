#include <iostream>

//creating structs
struct student{ //identifier
    //members of struct
    std::string name;
    double gpa;
    bool enrolled = true; // can set default value
}; //template of the structure

//structure that groups related variables under one name
int main(){
    student student1; //has all the properties associated with the student struct
    student1.name = "Spongebob"; //. is the "class member acccess operator"
    student1.gpa = 3.2;
    student1.enrolled = true;
    return 0;
}