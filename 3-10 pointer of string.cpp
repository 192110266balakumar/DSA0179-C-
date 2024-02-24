#include <iostream>
#include <string>

int main() {
   
    std::string stringValue = "Hello, World!";

   
    std::string *stringPtr = &stringValue;

  
    std::cout << "Value of stringValue: " << *stringPtr << std::endl;

    return 0;
}

