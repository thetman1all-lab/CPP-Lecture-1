#include <iostream>
#include <string>
#include <iomanip>

int main() {
    // Define variables for user to input
    std::string name;
    int age;
    double height;
    char y_or_n;

    // Prompt user to input name
    std::cout << "Enter name:" << std::endl;
    std::getline(std::cin, name);

    // Prompt user to input age
    std::cout << "Enter age:" << std::endl;
    std::cin >> age;

    // Prompt user to input height
    std::cout << "Enter height:" << std::endl;
    std::cin >> height;

    // Logic to determine if adult or child and response
    if (age >= 18) {
        std::cout << "Welcome, " << name << "-you're an adult at " << age << " years and " << height << " meters tall."
        << std::endl;
    } else {
        std::cout << "Hey " << name << ", you're still young at " << age << "-keep growing to " << height << " meters!"
        << std::endl;
    }

    // Prompts and logic for excitement to learn C++
    std::cout << "Are you excited to learn C++? (y/n):" << std::endl;
    std::cin >> y_or_n;
    bool excitement = (y_or_n == 'y');
    std::cout << std::boolalpha << "It is " << excitement << " that you are excited to learn C++" << std::endl;

    return 0;
}