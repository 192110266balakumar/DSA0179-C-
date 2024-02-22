#include <iostream>
#include <string>

class MyClass {
private:
    int data;
    std::string name;
public:
    MyClass(int d, const std::string& n) : data(d), name(n) {}

 
    friend std::ostream& operator<<(std::ostream& os, const MyClass& obj) {
        os << "Data: " << obj.data << ", Name: " << obj.name;
        return os;
    }
};

int main() {
    MyClass obj(10, "Example");
    
  
    std::cout << obj << std::endl;

    return 0;
}
