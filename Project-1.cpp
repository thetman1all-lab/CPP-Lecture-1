#include <iostream>
#include <string>

int main() {

    // Declare variables
    std::string name = "Travis";
    int age = 24;
    double height = 1.78;
    bool excitement_condition = true;
    std::string excitement = "false";

    // If statement to handle printing true or false for the bool variable for
    // excitement
    if (excitement_condition) {
        excitement = "true";
    }

    // Output declared variables in a formated sentence
    std::cout << "My name is " << name << ", I'm " << age << " years old, "
              << height << " meters tall, and it's " << excitement
              << " that I'm excited to learn C++." << std::endl;

    return 0;
}