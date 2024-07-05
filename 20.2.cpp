#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int numerator, denominator;
    double result;

    cout << "Enter the numerator: ";
    cin >> numerator;

    cout << "Enter the denominator: ";
    cin >> denominator;

    try {
        if (denominator == 0) {
            throw runtime_error("Divide by zero exception");
        }

        result = static_cast<double>(numerator) / denominator;
        cout << "Result of division: " << result << endl;
    } catch (const runtime_error& error) {
        cerr << "Error: " << error.what() << endl;
    }

    return 0;
}
