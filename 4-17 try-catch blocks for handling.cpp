#include <iostream>
#include <stdexcept>


void checkValue(int value) {
    if (value < 0) {
        throw std::runtime_error("Value cannot be negative.");
    }
}

int main() {
    try {
       
        int inputValue;
        std::cout << "Enter a non-negative integer: ";
        std::cin >> inputValue;

        checkValue(inputValue);
        std::cout << "Input value is valid." << std::endl;
    } catch (const std::runtime_error& e) {
        
        std::cerr << "Exception caught: " << e.what() << std::endl;
    } catch (...) {
     
        std::cerr << "An unknown exception occurred." << std::endl;
    }

    return 0;
}

