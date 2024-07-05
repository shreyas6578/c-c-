#include <iostream>
using namespace std;

class Cube {
private:
    double sideLength;

public:
    // Default constructor
    Cube() {
        sideLength = 0;
    }

    // Parameterized constructor
    Cube(double length) {
        sideLength = length;
    }

    // Calculate area
    double calculateArea() {
        return 6 * sideLength * sideLength;
    }

    // Calculate volume
    double calculateVolume() {
        return sideLength * sideLength * sideLength;
    }
};

int main() {
    // Using default constructor
    Cube cube1;
    cout << "Area of cube with default constructor: " << cube1.calculateArea() << endl;
    cout << "Volume of cube with default constructor: " << cube1.calculateVolume() << endl;

    // Using parameterized constructor
    double length;
    cout << "Enter the side length of the cube: ";
    cin >> length;
    Cube cube2(length);
    cout << "Area of cube with parameterized constructor: " << cube2.calculateArea() << endl;
    cout << "Volume of cube with parameterized constructor: " << cube2.calculateVolume() << endl;

    return 0;
}
