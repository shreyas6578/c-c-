#include <iostream>
using namespace std;

// Base class for single inheritance
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Derived class for single inheritance
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

// Base classes for multiple inheritance
class Shape {
public:
    void draw() {
        cout << "Shape is being drawn." << endl;
    }
};

class Color {
public:
    void fill() {
        cout << "Color is being filled." << endl;
    }
};

// Derived class for multiple inheritance
class Rectangle : public Shape, public Color {
public:
    void display() {
        cout << "Rectangle is being displayed." << endl;
    }
};

// Base and derived classes for multilevel inheritance
class Vehicle {
public:
    void drive() {
        cout << "Vehicle is being driven." << endl;
    }
};

class Car : public Vehicle {
public:
    void honk() {
        cout << "Car is honking." << endl;
    }
};

class Sedan : public Car {
public:
    void accelerate() {
        cout << "Sedan is accelerating." << endl;
    }
};

int main() {
    // Single Inheritance
    Dog dog;
    dog.eat();  // Accessing base class member function
    dog.bark(); // Accessing derived class member function

    // Multiple Inheritance
    Rectangle rectangle;
    rectangle.draw();   // Accessing base class Shape member function
    rectangle.fill();   // Accessing base class Color member function
    rectangle.display(); // Accessing derived class member function

    // Multilevel Inheritance
    Sedan sedan;
    sedan.drive();      // Accessing base class Vehicle member function
    sedan.honk();       // Accessing base class Car member function
    sedan.accelerate(); // Accessing derived class member function

    return 0;
}
