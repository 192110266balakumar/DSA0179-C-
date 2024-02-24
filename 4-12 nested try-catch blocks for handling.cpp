#include <iostream>

int main() {
    try {
      
        std::cout << "Outer try block starts." << std::endl;

        try {
        
            std::cout << "Inner try block starts." << std::endl;

           
            throw std::runtime_error("Inner Exception");
        } catch (const std::exception& inner_exception) {
            
            std::cerr << "Inner catch block: " << inner_exception.what() << std::endl;
        }

        
        std::cout << "Continuing execution after handling inner exception." << std::endl;

      
        throw std::runtime_error("Outer Exception");
    } catch (const std::exception& outer_exception) {
        
        std::cerr << "Outer catch block: " << outer_exception.what() << std::endl;
    }

    std::cout << "Program continues execution after handling outer exception." << std::endl;

    return 0;
}

