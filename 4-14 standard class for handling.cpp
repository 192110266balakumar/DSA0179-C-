#include <iostream>
#include <stdexcept>


void divide(int dividend, int divisor) {
    if (divisor == 0) {
        throw std::runtime_error("Division by zero error.");
    }
    std::cout << "Result of division: " << dividend / divisor << std::endl;
}

int main() {
    try {
        
        divide(10, 0);
    } catch (const std::exception& e) {
      
        std::cerr << "Standard exception caught: " << e.what() << std::endl;
    }

    return 0;
}

