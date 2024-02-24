#include <iostream>

int main() {

    int num = 10;

 
    int *ptr = &num;

  
    std::cout << "Value of num: " << *ptr << std::endl;

    return 0;
}

