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
    
    Student student;
    Teacher teacher;


    student.greet();
    teacher.greet();

    return 0;
}

