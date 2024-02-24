#include <iostream>
#include <stdexcept>


void processInput(int input) {
    if (input < 0) {
        throw std::runtime_error("Negative input error.");
    } else if (input == 0) {
        throw std::invalid_argument("Zero input error.");
    } else if (input > 100) {
        throw std::out_of_range("Input out of range error.");
    }
}

int main() {
    try {
      
        processInput(-5);
        processInput(0);
        processInput(200);
    } catch (const std::runtime_error& e) {
        std::cerr << "Runtime error caught: " << e.what() << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Invalid argument error caught: " << e.what() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Out of range error caught: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown error caught." << std::endl;
    }

    return 0;
}

