#include <iostream>
using namespace std;

// Base class: Animal
class Animal {
public:
    // Virtual function speak
    virtual void speak() {
        cout << "Animal speaks" << endl;
    }
};

// Derived class: Dog
class Dog : public Animal {
public:
    // Overriding the speak function of the base class
    void speak() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* animalPtr = new Dog(); // Pointer to a Dog object

    // Polymorphism: Using base class pointer to call overridden function
    animalPtr->speak();  // Calls Dog's speak

    delete animalPtr; // Freeing dynamically allocated memory

    return 0;
}
