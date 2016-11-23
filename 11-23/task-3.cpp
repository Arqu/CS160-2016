#include <iostream>
 #include <string>
 
 int main() {
 std::string input;
 std::cout << "Please enter a string: ";
 std::getline(std::cin, input);
 std::cout << "Yo, " << input << std::endl;
 return 0;
 }

