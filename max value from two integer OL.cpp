#include <iostream>


int max(int a, int b) {
    return (a > b) ? a : b;
}


float max(float a, float b) {
    return (a > b) ? a : b;
}


char max(char a, char b) {
    return (a > b) ? a : b;
}

int main() {
   
    int intMax = max(5, 3);
    std::cout << "Maximum of two integers: " << intMax << std::endl;

   
    float floatMax = max(5.5f, 3.3f);
    std::cout << "Maximum of two floating-point numbers: " << floatMax << std::endl;

    
    char charMax = max('a', 'b');
    std::cout << "Maximum of two characters: " << charMax << std::endl;

    return 0;
}

