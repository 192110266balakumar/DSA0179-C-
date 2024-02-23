#include <iostream>


void printArray(const int arr[], int size) {
    std::cout << "Integer Array:";
    for (int i = 0; i < size; ++i) {
        std::cout << " " << arr[i];
    }
    std::cout << std::endl;
}


void printArray(const double arr[], int size) {
    std::cout << "Double Array:";
    for (int i = 0; i < size; ++i) {
        std::cout << " " << arr[i];
    }
    std::cout << std::endl;
}


void printArray(const char arr[], int size) {
    std::cout << "Character Array:";
    for (int i = 0; i < size; ++i) {
        std::cout << " " << arr[i];
    }
    std::cout << std::endl;
}

int main() {
   
    int intArr[] = {1, 2, 3, 4, 5};
    printArray(intArr, 5);

   
    double doubleArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    printArray(doubleArr, 5);

  
    char charArr[] = {'a', 'b', 'c', 'd', 'e'};
    printArray(charArr, 5);

    return 0;
}

