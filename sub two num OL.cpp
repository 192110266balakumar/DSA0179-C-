#include <iostream>

class Number {
private:
    int value;
public:

    Number(int v) : value(v) {}

    
    Number operator-(const Number& other) const {
        int result = value - other.value;
        return Number(result);
    }

  
    int getValue() const {
        return value;
    }
};

int main() {
    Number num1(10);
    Number num2(5);

  
    Number result = num1 - num2;

   
    std::cout << "Result of subtraction: " << result.getValue() << std::endl;

    return 0;
}

