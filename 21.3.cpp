#include <iostream>
using namespace std;

template <typename T>
class Calculator {
private:
    T num1, num2;

public:
    Calculator(T n1, T n2) : num1(n1), num2(n2) {}

    T subtract() {
        return num1 - num2;
    }

    T multiply() {
        return num1 * num2;
    }

    double divide() {
        if (num2 == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return static_cast<double>(num1) / num2;
    }
};

int main() {
    Calculator<int> intCalc(10, 5);
    Calculator<double> doubleCalc(20.5, 3.5);

    cout << "Integer Calculation:" << endl;
    cout << "Subtraction: " << intCalc.subtract() << endl;
    cout << "Multiplication: " << intCalc.multiply() << endl;
    cout << "Division: " << intCalc.divide() << endl;

    cout << "\nDouble Calculation:" << endl;
    cout << "Subtraction: " << doubleCalc.subtract() << endl;
    cout << "Multiplication: " << doubleCalc.multiply() << endl;
    cout << "Division: " << doubleCalc.divide() << endl;

    return 0;
}
