#include <iostream>
using namespace std;

int main() {
    // Dynamically allocate memory for a single integer
    int* dynamicInt = new int(42);

    // Display the dynamically allocated integer
    cout << "Dynamically allocated integer value: " << *dynamicInt << endl;

    // Deallocate memory for the single integer
    delete dynamicInt;

    return 0;
}
