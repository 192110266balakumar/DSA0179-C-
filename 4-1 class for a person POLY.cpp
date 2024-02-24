#include <iostream>


class Person {
public:
  
    virtual void work() {
        std::cout << "Person is working." << std::endl;
    }
};


class Employee : public Person {
public:
    
    void work() override {
        std::cout << "Employee is working." << std::endl;
    }
};


class Manager : public Person {
public:
    
    void work() override {
        std::cout << "Manager is working." << std::endl;
    }
};

int main() {
    
    Person* personPtr = nullptr;

    Employee emp;
    Manager mgr;

 
    personPtr = &emp;
    personPtr->work();

    
    personPtr = &mgr;
    personPtr->work();

    return 0;
}

