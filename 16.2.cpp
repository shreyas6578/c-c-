#include <iostream>
#include <string>
using namespace std;

// Base class: Animal
class Animal {
protected:
    string name;

public:
    Animal(const string &name) : name(name) {}

    void setName(const string &name) {
        this->name = name;
    }

    virtual void eat() {
        cout << name << " is eating." << endl;
    }

    virtual void sound() = 0; // Pure virtual function
};

// Virtual base class: Mammal
class Mammal : virtual public Animal {
public:
    Mammal(const string &name) : Animal(name) {}

    void giveBirth() {
        cout << name << " is giving birth to live young." << endl;
    }

    void sound() override {
        cout << name << " makes mammal sound." << endl;
    }
};

// Virtual base class: Bird
class Bird : virtual public Animal {
public:
    Bird(const string &name) : Animal(name) {}

    void layEggs() {
        cout << name << " is laying eggs." << endl;
    }

    void sound() override {
        cout << name << " makes bird sound." << endl;
    }
};

// Derived class: Bat
class Bat : public Mammal, public Bird {
public:
    Bat(const string &name) : Animal(name), Mammal(name), Bird(name) {}

    void sound() override {
        cout << name << " makes bat sound." << endl;
    }
};

int main() {
    Mammal mammal("Lion");
    Bird bird("Eagle");
    Bat bat("Fruit Bat");

    mammal.eat();
    mammal.giveBirth();
    mammal.sound();

    bird.eat();
    bird.layEggs();
    bird.sound();

    bat.eat();
    bat.Mammal::giveBirth(); // Resolving ambiguity using scope resolution
    bat.Bird::layEggs();     // Resolving ambiguity using scope resolution
    bat.sound();

    return 0;
}
