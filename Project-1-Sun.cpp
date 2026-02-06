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

    // Promt the user to input excitment
    std::cout << "Are you excited to learn C++? (y/n):" << std::endl;
    std::cin >> y_or_n;

    // Determine if excited from the user's input
    bool excitement = (y_or_n == 'y');

    // If/else statement to determine proper output to user
    if (age >= 18) {
        std::cout << "Welcome, " << name << ", you're an adult at " << age << " years old and " << height
                  << " meters tall." << std::boolalpha << " And it is " << excitement
                  << " that you are excited to learn C++" << std::endl;
    } else {
        std::cout << "Hey " << name << ", you're still young at " << age << " years old. Keep growing to " << height
                  << " meters!" << std::boolalpha << " And it is " << excitement
                  << " that you are excited to learn C++" << std::endl;
    }

    return 0;
}