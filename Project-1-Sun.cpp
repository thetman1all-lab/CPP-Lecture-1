// Write a C++ program that:

// - Add a bool: Ask if excited about C++ (y/n), store as bool
// (e.g., char input; cin >> input; bool excited = (input == 'y');), and append "And you're excited: [true/false]." Use boolalpha.

// Requirements:

// Proper includes.
// Handle input cleanly (prompts like "Enter name: ").
// Under 30 lines, clean code.
// Commit to a new GitHub repo, push, and share the repo link with your submission.

// Tips
// - For strings with spaces, use namespace <string>:
// std::getline(std::cin, name);

// - General structure of if/else chains:
// if (...) {code} else if (...) {code} else {code}

// - Operators:
// == (equal), != (not), >, <, >=, <=, && (and), || (or), ! (not)

#include <iostream>
#include <string>
#include <iomanip>

int main() {
    // Define variables for user to input
    std::string name;
    int age;
    double height;

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

    return 0;
}