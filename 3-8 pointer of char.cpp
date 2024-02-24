#include <iostream>

int main() {
   
    char charValue = 'A';

   
    char *charPtr = &charValue;

 
    std::cout << "Value of charValue: " << *charPtr << std::endl;

    return 0;
}

