#include <iostream>
#include <string>

class MyClass {
private:
    int data;
    std::string name;
public:
    MyClass(int d, const std::string& n) : data(d), name(n) {}

  
    bool operator==(const MyClass& other) const {
        return (data == other.data) && (name == other.name);
    }
};

int main() {
    MyClass obj1(10, "Example");
    MyClass obj2(10, "Example");
    MyClass obj3(20, "Another");

  
    if (obj1 == obj2) {
        std::cout << "obj1 and obj2 are equal." << std::endl;
    } else {
        std::cout << "obj1 and obj2 are not equal." << std::endl;
    }

    if (obj1 == obj3) {
        std::cout << "obj1 and obj3 are equal." << std::endl;
    } else {
        std::cout << "obj1 and obj3 are not equal." << std::endl;
    }

    return 0;
}
