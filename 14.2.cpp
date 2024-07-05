#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Constructor called" << endl;
    }

    ~MyClass() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    // Dynamically allocate memory for an object
    MyClass* dynamicObj = new MyClass();

    // Deallocate memory for the object
    delete dynamicObj;

    return 0;
}
