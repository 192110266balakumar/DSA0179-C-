#include <iostream>

class MyClass {
private:
    int data;
public:
    
    MyClass(int d) : data(d) {}

   
    MyClass& operator+=(const MyClass& other) {
      
        data += other.data;
        return *this; 
    }

  
    int getData() const {
        return data;
    }
};

int main() {
    MyClass obj1(5);
    MyClass obj2(10);


    obj1 += obj2;

  
    std::cout << "Result of addition: " << obj1.getData() << std::endl;

    return 0;
}

