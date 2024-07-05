#include <iostream>
#include <string>
class Car {
private:
    std::string model;
    int year;
    double price;
public:
    // Public constructor
    Car(std::string model, int year, double price) {
        this->model = model;
        this->year = year;
        this->price = price;
    }
    // Public method to display car information
    void displayInfo() {
        std::cout << "Model: " << model << std::endl;
        std::cout << "Year: " << year << std::endl;
        std::cout << "Price: $" << price << std::endl;
    }
    // Public method to calculate depreciation (private member access)
    void calculateDepreciation(int currentYear) {
        int yearsOwned = currentYear - year;
        double depreciationRate = 0.1; // 10% depreciation rate per year

        double depreciatedPrice = price - (price * depreciationRate * yearsOwned);
        std::cout << "Depreciated Price: $" << depreciatedPrice << std::endl;
    }
};
int main() {
    // Create a Car object and access its public members
    Car myCar("Toyota Camry", 2019, 25000.0);
    myCar.displayInfo();

    // Access the private method using a public method
    int currentYear = 2024;
    myCar.calculateDepreciation(currentYear);

    return 0;
}
