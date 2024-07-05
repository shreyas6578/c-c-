#include <iostream>
using namespace std;

// Abstract class: Shape
class Shape {
public:
    // Pure virtual function to calculate area
    virtual double calculateArea() = 0;

    // Virtual function to display information about the shape
    virtual void displayInfo() {
        cout << "This is a shape." << endl;
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double radius) : radius(radius) {}

    // Implementation of pure virtual function calculateArea for Circle
    double calculateArea() override {
        return 3.14 * radius * radius;
    }

    // Override the displayInfo function to provide specific information about Circle
    void displayInfo() override {
        cout << "This is a circle with radius " << radius << endl;
    }
};

int main() {
    // Shape* shape = new Shape(); // Error: Cannot instantiate an object of abstract class

    // Create a Circle object
    Circle circle(5);

    // Call the overridden functions
    cout << "Area of the circle: " << circle.calculateArea() << endl;
    circle.displayInfo();

    return 0;
}
