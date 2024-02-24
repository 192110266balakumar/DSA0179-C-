#include <iostream>

class Vehicle {
public:
    
    virtual void drive() const {
        std::cout << "Vehicle is being driven." << std::endl;
    }
};


class Car : public Vehicle {
public:
   
    void drive() const override {
        std::cout << "Car is being driven." << std::endl;
    }
};


class Truck : public Vehicle {
public:
   
    void drive() const override {
        std::cout << "Truck is being driven." << std::endl;
    }
};

int main() {
    
    Car car;
    Truck truck;

   
    car.drive();
    truck.drive();

    return 0;
}

