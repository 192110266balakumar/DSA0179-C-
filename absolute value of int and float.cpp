#include <iostream>
#include <cmath>


int absolute(int num) {
    return (num < 0) ? -num : num;
}


double absolute(double num) {
    return std::fabs(num);
}

int main() {
  
    int intNum = -5;
    int absInt = absolute(intNum);
    std::cout << "Absolute value of " << intNum << " (integer): " << absInt << std::endl;

 
    double doubleNum = -5.5;
    double absDouble = absolute(doubleNum);
    std::cout << "Absolute value of " << doubleNum << " (floating-point): " << absDouble << std::endl;

    return 0;
}

