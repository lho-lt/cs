#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    Car(string name, int speed) {
        this->name = name;
        this->speed = speed;
        this->fuel = 100; 
    }

    string getName() const { return name; }
    void setName(string name) { this->name = name; }

    int getSpeed() const { return speed; }
    void setSpeed(int speed) { this->speed = speed; }

    int getFuel() const { return fuel; }

    void Drive() {
        if (fuel > 0) {
            cout << "The car is driving at " << speed << " km/h" << endl;
            this->fuel -= 10;
        } else {
            cout << "The car is out of fuel" << endl;
        }
    }

    void Refuel() {
        this->fuel = 100;
        cout << "The" << name << " has been refueled to 100%" << endl;
    }

private:
    string name;
    int speed;
    int fuel;
};

int main() {
    Car myCar("Tesla", 120);

    cout << "Car name: " << myCar.getName() << endl;
    cout << "Car speed: " << myCar.getSpeed() << " km/h" << endl;
    cout << "Fuel level: " << myCar.getFuel() << "%" << endl;

    myCar.Drive();
    cout << "Fuel level after drive: " << myCar.getFuel() << "%" << endl;


    myCar.Refuel();
    cout << "Fuel level after refuel: " << myCar.getFuel() << "%" << endl;

    return 0;
}
