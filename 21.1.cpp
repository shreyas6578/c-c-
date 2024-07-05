#include <iostream>
template <typename T>
T findLargest(T arr[], int size) {
    T largest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int intArr[] = {10, 20, 30, 40, 50};
    double doubleArr[] = {1.5, 2.5, 3.5, 4.5, 5.5};

    int largestInt = findLargest(intArr, 5);
    double largestDouble = findLargest(doubleArr, 5);

    std::cout << "Largest integer: " << largestInt << std::endl;
    std::cout << "Largest double: " << largestDouble << std::endl;

    return 0;
}
