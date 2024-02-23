#include <iostream>
#include <algorithm>


void sortArray(int arr[], int size) {
    std::sort(arr, arr + size);
}


void sortArray(double arr[], int size) {
    std::sort(arr, arr + size);
}


template<typename T>
void printArray(T arr[], int size) {
    std::cout << "Array:";
    for (int i = 0; i < size; ++i) {
        std::cout << " " << arr[i];
    }
    std::cout << std::endl;
}

int main() {
   
    int intArr[] = {5, 3, 7, 1, 4};
    int intSize = sizeof(intArr) / sizeof(int);
    sortArray(intArr, intSize);
    printArray(intArr, intSize);

   
    double doubleArr[] = {5.5, 3.3, 7.7, 1.1, 4.4};
    int doubleSize = sizeof(doubleArr) / sizeof(double);
    sortArray(doubleArr, doubleSize);
    printArray(doubleArr, doubleSize);

    return 0;
}

