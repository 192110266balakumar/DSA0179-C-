#include <iostream>
#include <memory>


class Resource {
public:
    Resource() {
        std::cout << "Resource acquired." << std::endl;
    }

    ~Resource() {
        std::cout << "Resource released." << std::endl;
    }

    void doSomething() {
        std::cout << "Doing something with the resource." << std::endl;
    }
};

int main() {
    try {
        
        std::shared_ptr<Resource> ptr(new Resource());

       
        ptr->doSomething();

       
        throw std::runtime_error("An error occurred.");
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    
    return 0;
}

