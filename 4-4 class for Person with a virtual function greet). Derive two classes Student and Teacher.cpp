#include <iostream>


class Person {
public:
 
    virtual void greet() const {
        std::cout << "Hello, I am a person." << std::endl;
    }
};


class Student : public Person {
public:
  
    void greet() const override {
        std::cout << "Hello, I am a student." << std::endl;
    }
};


class Teacher : public Person {
public:
   
    void greet() const override {
        std::cout << "Hello, I am a teacher." << std::endl;
    }
};

int main() {
   
    const Person* personPtr = nullptr;

    Student student;
    Teacher teacher;


    personPtr = &student;
    personPtr->greet();

    
    personPtr = &teacher;
    personPtr->greet();

    return 0;
}

