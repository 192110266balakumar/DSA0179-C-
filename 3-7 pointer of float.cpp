#include <iostream>

int main() {

    float floatValue = 3.14;

    
    float *floatPtr = &floatValue;

  
    std::cout << "Value of floatValue: " << *floatPtr << std::endl;

    return 0;
}

