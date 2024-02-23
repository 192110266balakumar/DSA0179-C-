#include <iostream>
#include <cmath>


long long power(int base, int exponent) {
    long long result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}


double power(double base, int exponent) {
    return std::pow(base, exponent);
}

int main() {
   
    int baseInt = 2;
    int exponentInt = 5;
    long long intPower = power(baseInt, exponentInt);
    std::cout << "Power of " << baseInt << " raised to " << exponentInt << " (integer): " << intPower << std::endl;

    
    double baseDouble = 2.5;
    int exponentDouble = 3;
    double doublePower = power(baseDouble, exponentDouble);
    std::cout << "Power of " << baseDouble << " raised to " << exponentDouble << " (floating-point): " << doublePower << std::endl;

    return 0;
}

