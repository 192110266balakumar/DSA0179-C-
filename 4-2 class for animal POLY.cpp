#include <iostream>


class Animal {
public:
   
    virtual void eat() {
        std::cout << "Animal is eating." << std::endl;
    }
};


class Herbivore : public Animal {
public:
    
    void eat() override {
        std::cout << "Herbivore is eating plants." << std::endl;
    }
};


class Carnivore : public Animal {
public:
 
    void eat() override {
        std::cout << "Carnivore is eating other animals." << std::endl;
    }
};

int main() {

    Animal* animalPtr = nullptr;

    Herbivore herb;
    Carnivore carn;

  
    animalPtr = &herb;
    animalPtr->eat();

    
    animalPtr = &carn;
    animalPtr->eat();

    return 0;
}

