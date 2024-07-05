#include <iostream>
#include <string>

// Define a class named Student
class Student {
private:
    std::string name;
    int age;
    double gpa;

public:
    // Constructor to initialize the class members
    Student(std::string name, int age, double gpa) {
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }

    // Member function to display student information
    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "GPA: " << gpa << std::endl;
    }
};

int main() {
    // Create objects of the Student class
    Student student1("Alice", 20, 3.8);
    Student student2("Bob", 22, 3.5);

    // Access class members using objects and member functions
    std::cout << "Student 1 Information:" << std::endl;
    student1.displayInfo();

    std::cout << "\nStudent 2 Information:" << std::endl;
    student2.displayInfo();

    return 0;
}
