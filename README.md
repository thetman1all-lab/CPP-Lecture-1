Lesson 1 Outline:  

# GITHUB BASICS
- Set Up Computer (Should only have to be done once):
  - Generate SSH Key using email on Github:  
ssh-keygen -t ed25519 -C "your_email@example.com"
  - Copy the key:  
cat ~/.ssh/id_ed25519.pub
  - Go to GitHub > Settings > SSH and GPG keys > New SSH key
  - Paste the key, title it "Name Of Computer"
  - Test SSH:  
ssh -T git@github.com (should say "Hi yourusername! You've successfully authenticated...")

- Updating Origin with Git:  
git remote remove origin  
git remote add origin git@github.com:ssh/url/from/repo  

- Git Push Basic Workflow:  
  - Once your remote has the proper url from the SSH repo you can now add, commit, and push your code:  
  git add File-Name.cpp  
  git commit -m "Useful message to include with each commit"  
  git push -u origin main (the -u sets upstream tracking for future pulls/pushes and only needs to be done ONCE for EACH REPO)  
  - If you accidentally initialized with README on GitHub or there is a fast forward issue, pull first:  
  git pull origin main --allow-unrelated-histories  

- Repos
  - Always make repos as SSH. This is much easier for pushing and more secure  

# C++ Basics

- namespace  
  - NEVER USE (using namestace std;) BAD HABBIT!!
    
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

- \#include \<iomanip\>
  - This allows C++ to natively convert a bool to the "true" or "false" text rather than the default 1 or 0 value
