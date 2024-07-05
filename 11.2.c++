#include <iostream>

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n;
    double sum = 0.0;

    std::cout << "Enter the number of elements (up to " << MAX_SIZE << "): ";
    std::cin >> n;

    // Input the elements of the array
    std::cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
        sum += arr[i];
    }

    // Calculate the average
    double average = sum / n;

    // Print the average
    std::cout << "Average of elements in the array: " << average << std::endl;

    return 0;
}
