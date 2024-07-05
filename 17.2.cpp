#include <iostream>
using namespace std;

// Custom class: Number
class Number {
private:
    int value;

public:
    Number(int value = 0) : value(value) {}

    // Overloading binary + operator
    Number operator+(const Number& other) const {
        return Number(this->value + other.value);
    }

    // Overloading binary - operator
    Number operator-(const Number& other) const {
        return Number(this->value - other.value);
    }

    // Overloading binary * operator
    Number operator*(const Number& other) const {
        return Number(this->value * other.value);
    }

    // Function to display the Number object
    void display() const {
        cout << value;
    }
};

int main() {
    Number num1(5);
    Number num2(3);
    Number result;

    // Overloaded binary operators demonstration
    result = num1 + num2;
    cout << "num1 + num2 = ";
    result.display();
    cout << endl;

    result = num1 - num2;
    cout << "num1 - num2 = ";
    result.display();
    cout << endl;

    result = num1 * num2;
    cout << "num1 * num2 = ";
    result.display();
    cout << endl;

    return 0;
}
