#include <iostream>

class Array {
private:
    int* arr;
    int size;
public:
 
    Array(int s) : size(s) {
        arr = new int[size];
    }

   
    ~Array() {
        delete[] arr;
    }

 
    int& operator[](int index) {
        if (index < 0 || index >= size) {
            std::cerr << "Index out of bounds!" << std::endl;
          
            static int dummy;
            return dummy;
        }
        return arr[index];
    }
};

int main() {
    Array arr(5);

   
    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 2;
    }

    for (int i = 0; i < 5; ++i) {
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }

   
    std::cout << "Accessing an out-of-bounds index..." << std::endl;
    std::cout << "arr[10] = " << arr[10] << std::endl;

    return 0;
}

