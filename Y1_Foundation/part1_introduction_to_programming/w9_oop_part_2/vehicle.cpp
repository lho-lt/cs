#include <iostream>
#include <string>

class Vehicle {
  protected:
    std::string name = "Vehicle";
    int speed = 0;
    int fuel = 0;
    float price = 0;
    std::string type = "Vehicle";

  public:
    Vehicle(std::string name, int speed, int fuel, float price) {
        this->name = name;
        this->speed = speed;
        this->fuel = fuel;
        this->price = price;
    }

    virtual void printVehicleInfo() {
        std::cout << "Vehicle Info: \n";
        std::cout << "Name: " << name << "\n";
        std::cout << "Type: " << type << "\n";
        std::cout << "Speed: " << speed << " km/h\n";
        std::cout << "Fuel: " << fuel << " liters\n";
        std::cout << "Price: $" << price << "\n";
    }

    ~Vehicle() { std::cout << "Destroying a " << name << std::endl; }
};

class Car : public Vehicle {
  public:
    Car(std::string name, int speed, int fuel, float price)
        : Vehicle(name, speed, fuel, price) {
        this->type = "Car";
    }

    void printVehicleInfo() override {
        Vehicle::printVehicleInfo(); // Call the base class method first
        std::cout << "This is a car, so it's typically designed for 4-5 "
                     "passengers.\n";
        std::cout << "Ideal for city driving and family trips.\n";
    }
};

class Bike : public Vehicle {
  public:
    Bike(std::string name, int speed, int fuel, float price)
        : Vehicle(name, speed, fuel, price) {
        this->type = "Bike";
    }

    void printVehicleInfo() override {
        Vehicle::printVehicleInfo(); // Call the base class method first
        std::cout << "This is a bike, great for solo rides and commuting.\n";
        std::cout << "Fuel efficiency is the key here, with minimal fuel "
                     "consumption.\n";
    }
};

class Bus : public Vehicle {
  public:
    Bus(std::string name, int speed, int fuel, float price)
        : Vehicle(name, speed, fuel, price) {
        this->type = "Bus";
    }

    void printVehicleInfo() override {
        Vehicle::printVehicleInfo(); // Call the base class method first
        std::cout
            << "This is a bus, typically used for public transportation.\n";
        std::cout << "It can carry many passengers, usually 40-60 people.\n";
        std::cout << "Designed for long-distance trips or city tours.\n";
    }
};

int main() {
    Vehicle *toyota = new Car("Toyota Corolla", 180, 50, 25000);
    Vehicle *yamaha = new Bike("Yamaha MT-07", 160, 15, 8000);
    Vehicle *volvo = new Bus("Volvo City Bus", 80, 200, 120000);

    toyota->printVehicleInfo();
    std::cout << std::endl;
    yamaha->printVehicleInfo();
    std::cout << std::endl;
    volvo->printVehicleInfo();

    delete toyota;
    delete yamaha;
    delete volvo;

    return 0;
}