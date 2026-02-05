#include <iostream>
#include <string>
#include <iomanip>

int main() {

    // Declare variables
    std::string name = "Travis";
    int age = 24;
    double height = 1.78;
    bool excitement_condition = true;
    std::string excitement = "true";

    // Output declared variables in a formated sentence
    std::cout << "My name is " << name << ", I'm " << age << " years old, "
              << height << " meters tall, and it's " << std::boolalpha
              << excitement << " that I'm excited to learn C++." << std::endl;

    return 0;
}