#include <iostream>
template <typename T>
void swapData(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int int1 = 5, int2 = 10;
    double double1 = 3.14, double2 = 6.28;

    std::cout << "Before swapping:" << std::endl;
    std::cout << "int1 = " << int1 << ", int2 = " << int2 << std::endl;
    std::cout << "double1 = " << double1 << ", double2 = " << double2 << std::endl;

    swapData(int1, int2);
    swapData(double1, double2);

    std::cout << "\nAfter swapping:" << std::endl;
    std::cout << "int1 = " << int1 << ", int2 = " << int2 << std::endl;
    std::cout << "double1 = " << double1 << ", double2 = " << double2 << std::endl;

    return 0;
}
