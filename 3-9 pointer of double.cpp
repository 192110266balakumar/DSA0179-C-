#include <iostream>

int main() {
  
    double doubleValue = 3.14159;

    double *doublePtr = &doubleValue;

   
    std::cout << "Value of doubleValue: " << *doublePtr << std::endl;

    return 0;
}

