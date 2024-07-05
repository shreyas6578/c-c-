#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the area of a rectangle
double area(double length, double width) {
    return length * width;
}

// Function to calculate the area of a circle
double area(double radius) {
    return M_PI * radius * radius;
}

// Function to calculate the area of a triangle
double area(double base, double height, char) { // 'char' is used as a dummy parameter to differentiate from rectangle
    return 0.5 * base * height;
}

int main() {
    double length, width, radius, base, height;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of the rectangle: " << area(length, width) << endl;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << area(radius) << endl;

    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle: " << area(base, height, 't') << endl;

    return 0;
}
