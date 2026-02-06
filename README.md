Lesson 1 Outline:  

- namespace  
  - NEVER USE (using namestace std;) BAD HABBIT!!
 
- Repos
  - Always make repos as SSH. This is much easier for pushing and more secure
    
- Basic Data Types:
  - int: Whole numbers (e.g., 42)
  - double: Floating-point numbers with decimals (e.g., 3.14)
  - char: Single characters within SINGLE QUOTES (e.g., 'A')  
  - bool: True or false
  - std::string: For text strings (e.g., "Hello"). Need #include \<string\> and use std::string  
  
- Variables must be declared before use  
  
- For strings with spaces, use namespace \<string\>:  
std::getline(std::cin, name);  
  
- General structure of if/else chains:  
if (...) {code} else if (...) {code} else {code}  
  
- Operators:  
== (equal), != (not), >, <, >=, <=, && (and), || (or), ! (not)

- cin and cout
  - cout points OUT to the left (<<)
  - cin points IN to the right (>>)
 
- Push It:  
  - git push -u origin main (the -u sets upstream tracking for future pulls/pushes)
  - If you accidentally initialized with README on GitHub, pull first (git pull origin main --allow-unrelated-histories), resolve merges, then push

- \#include \<iomanip\>
  - This allows C++ to natively convert a bool to the "true" or "false" text rather than the default 1 or 0 value
