#include <iostream>

int main(){
    //fill() filles a range of elements with a specified value
    //fill(begin, end, value)

    //std::string foods[5] = {"pizza", "pizza", "pizza", "pizza", "pizza"};

    const int SIZE = 100;
    std::string foods[SIZE];

    fill(foods, foods+(SIZE/2), "pizza"); //begin address is the array name
    //filles half with pizza
    fill(foods+(SIZE/2), foods + SIZE, "hamburger");
    std::string temp; //temporary input

    //for(std::string food : foods){ for displaying
    //    std::cout << food << '\n';
    //}

    //accepting user input with fill
    std::string newfoods[5]; //static structures
    int size = sizeof(newfoods) / sizeof(newfoods[0]);

    for(int i = 0; i < size; i++){
        std::cout << "Enter a food you like or 'q' to quit #" << i << ": ";
        std::getline(std::cin, temp);
        if(temp == "q"){
            break; 
        }else{
            newfoods[i] = temp;
        }
    }

    std::cout << "You like the following food:\n";
    
    for(int i = 0; !newfoods[i].empty(); i++){
        std::cout << newfoods[i] << '\n';
    }
    return 0;
}