#include <iostream>
#include <stdexcept>


class MyException : public std::exception {
public:
    
    MyException(const char* message) : msg(message) {}

   
    const char* what() const noexcept override {
        return msg.c_str();
    }

private:
    std::string msg;
};


void processNumber(int num) {
    if (num < 0) {
        throw MyException("Number cannot be negative.");
    }
    std::cout << "Number is: " << num << std::endl;
}

int main() {
    try {
        
        processNumber(-5);
    } catch (const MyException& e) {
        
        std::cerr << "Custom exception caught: " << e.what() << std::endl;
    }

    return 0;
}

