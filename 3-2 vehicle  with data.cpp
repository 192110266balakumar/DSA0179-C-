#include <iostream>
#include <string>

using namespace std;

class Vehicle {
protected:
    string make;
    string model;
    int year;

public:
    Vehicle(string make, string model, int year)
        : make(make), model(model), year(year) {}


    string getMake() const { return make; }
    string getModel() const { return model; }
    int getYear() const { return year; }

 
    void setMake(string make) { this->make = make; }
    void setModel(string model) { this->model = model; }
    void setYear(int year) { this->year = year; }
};

class Car : public Vehicle {
private:
    int seatingCapacity;
    string fuelType;

public:
    Car(string make, string model, int year, int seatingCapacity, string fuelType)
        : Vehicle(make, model, year), seatingCapacity(seatingCapacity), fuelType(fuelType) {}

    // Getters
    int getSeatingCapacity() const { return seatingCapacity; }
    string getFuelType() const { return fuelType; }

    // Setters
    void setSeatingCapacity(int seatingCapacity) { this->seatingCapacity = seatingCapacity; }
    void setFuelType(string fuelType) { this->fuelType = fuelType; }
};

class Truck : public Vehicle {
private:
    int payloadCapacity;
    int towingCapacity;

public:
    Truck(string make, string model, int year, int payloadCapacity, int towingCapacity)
        : Vehicle(make, model, year), payloadCapacity(payloadCapacity), towingCapacity(towingCapacity) {}

    // Getters
    int getPayloadCapacity() const { return payloadCapacity; }
    int getTowingCapacity() const { return towingCapacity; }

    // Setters
    void setPayloadCapacity(int payloadCapacity) { this->payloadCapacity = payloadCapacity; }
    void setTowingCapacity(int towingCapacity) { this->towingCapacity = towingCapacity; }
};

int main() {
    Car car("Toyota", "Camry", 2022, 5, "Gasoline");
    cout << "Car Make: " << car.getMake() << endl;
    cout << "Car Model: " << car.getModel() << endl;
    cout << "Car Year: " << car.getYear() << endl;
    cout << "Car Seating Capacity: " << car.getSeatingCapacity() << endl;
    cout << "Car Fuel Type: " << car.getFuelType() << endl;

    Truck truck("Ford", "F-150", 2020, 2000, 10000);
    cout << "\nTruck Make: " << truck.getMake() << endl;
    cout << "Truck Model: " << truck.getModel() << endl;
    cout << "Truck Year: " << truck.getYear() << endl;
    cout << "Truck Payload Capacity: " << truck.getPayloadCapacity() << endl;
    cout << "Truck Towing Capacity: " << truck.getTowingCapacity() << endl;

    return 0;
}

