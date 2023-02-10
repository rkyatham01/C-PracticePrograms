#include <iostream>

// Abstraction = hiding unnecessary data from outside a class
// getter = function that makes a private attribute READABLE
// setter = function that makes a private attribute WRITEABLE

class Stove{
    // public: //accessible from outside the class
    //     int temperature = 0;
    private:
        int temperature = 0; //hides from outside world
        //getters (read) and setters (write) can only access
    public:
        //could make constructor here but to set the attributes now
        //you would have to call the setter functions and pass the value in
        int getTemperature(){ //makes attribute readable
            return temperature;
        }

        void setTemperature(int temperature){ //setter makes attribute writeable
            this->temperature = temperature;
        }
};

int main(){
    
    Stove stove;
    return 0;
}