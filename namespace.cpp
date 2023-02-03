#include <iostream>

//namespace is a delcarative region that provdies a scope to the identifiers
//helps prevent name collisions
namespace first{ //unique identified namespace
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){ //how namespaces work
    //could use namespace std::(string, etc)
    //using namespace first; would let us use the delcared variable from first namespace (defaults namespace)
    int x = 0;
    //int x = 1; this would give redeclaration of x error
    std::cout << x << '\n'; //uses local version if not displayed what namespace used
    std::cout << first::x << '\n'; //two colons is the resolution operator
    std::cout << second::x;
    //basically grabs the x from the first namespace
    return 0;
}