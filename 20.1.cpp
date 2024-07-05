#include <iostream>
#include <string>
using namespace std;

// Encapsulation: Vehicle class with private member variables
class Vehicle {
private:
    string make;
    string model;
    int year;

public:
    // Constructor to initialize the Vehicle object
    Vehicle(const string& vehicleMake, const string& vehicleModel, int vehicleYear)
        : make(vehicleMake), model(vehicleModel), year(vehicleYear) {}

    // Abstraction: Method to display vehicle details without revealing internal implementation
    void displayDetails() const {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }

    // Abstraction: Method to start the vehicle without exposing internal details
    void start() const {
        cout << "Starting the " << year << " " << make << " " << model << endl;
    }
};

int main() {
    // Creating a Vehicle object
    Vehicle myCar("Toyota", "Camry", 2022);

    // Using abstraction to interact with the Vehicle object
    myCar.displayDetails();
    myCar.start();

    return 0;
}
