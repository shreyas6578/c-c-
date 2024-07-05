#include <iostream>
#include <limits>

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    // Initialize min_val with the maximum possible integer value
    int min_val = std::numeric_limits<int>::max();

    // Loop to input numbers and find the minimum
    for (int i = 0; i < n; ++i) {
        int num;
        std::cout << "Enter number " << i + 1 << ": ";
        std::cin >> num;

        // Compare num with min_val and update min_val if necessary
        if (num < min_val) {
            min_val = num;
        }
    }

    std::cout << "The minimum number is: " << min_val << std::endl;

    return 0;
}
