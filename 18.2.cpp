#include <iostream>
using namespace std;

// Base class: Shape
class Shape {
public:
    // Virtual function to calculate area
    virtual double calculateArea() {
        return 0.0; // Default implementation for base class
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double radius) : radius(radius) {}

    // Override the calculateArea function for Circle
    double calculateArea() override {
        return 3.14 * radius * radius;
    }
};

int main() {
    // Create a pointer to Shape
    Shape* shapePtr;

    // Create a Circle object and assign its address to shapePtr
    Circle circle(5);
    shapePtr = &circle;

    // Call the overridden calculateArea function using the base class pointer
    cout << "Area of the circle: " << shapePtr->calculateArea() << endl;

    return 0;
}
