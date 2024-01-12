#include <iostream>

class Vehicle {
public:
    virtual void startEngine() = 0;
    virtual void drive() = 0;
};

class Car : public Vehicle {
public:
    void startEngine() override {
        std::cout << "Car engine started.\n";
    }

    void drive() override {
        std::cout << "Car is driving.\n";
    }
};

class Bike : public Vehicle {
public:
    void startEngine() override {
        std::cout << "Bike engine started.\n";
    }

    void drive() override {
        std::cout << "Bike is driving.\n";
    }
};

int main() {
    const int numVehicles = 2;
    Vehicle* vehicles[numVehicles];

    Car myCar;
    Bike myBike;

    vehicles[0] = &myCar;
    vehicles[1] = &myBike;

    for (int i = 0; i < numVehicles; ++i) {
        vehicles[i]->startEngine();
        vehicles[i]->drive();
        std::cout << "\n";
    }

    return 0;
}

