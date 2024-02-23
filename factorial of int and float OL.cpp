#include <iostream>
#include <cmath>


unsigned long long factorial(int n) {
    if (n < 0) {
        std::cerr << "Factorial is not defined for negative integers." << std::endl;
        return 0;
    }
    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}


double factorial(double x) {
    if (x < 0) {
        std::cerr << "Factorial is not defined for negative numbers." << std::endl;
        return 0;
    }
    return std::tgamma(x + 1);
}

int main() {
   
    int n = 5;
    unsigned long long intFact = factorial(n);
    std::cout << "Factorial of " << n << " (integer): " << intFact << std::endl;

   
    double x = 5.5;
    double doubleFact = factorial(x);
    std::cout << "Factorial of " << x << " (floating-point): " << doubleFact << std::endl;

    return 0;
}

