#include <iostream>
using namespace std;

// Function to generate Fibonacci series using recursion
int fibonacci(int n) {
    if (n <= 1) {
        return n; // Base case: Fibonacci of 0 is 0, Fibonacci of 1 is 1
    } else {
        // Recursive case: Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int numTerms;

    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> numTerms;

    cout << "Fibonacci series up to " << numTerms << " terms:" << endl;
    for (int i = 0; i < numTerms; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}
