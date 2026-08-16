#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    int age ;
    std::cout << "Enter your age: ";
    std::cin >> age;
    if  (age < 0) {
        std::cout << "Age cannot be negative." << std::endl;
    } else if (age < 18) {
        std::cout << "You are a minor." << std::endl;
    } else if (age < 65) {
        std::cout << "You are an adult." << std::endl;
    } else {
        std::cout << "You are a senior citizen." << std::endl;
    }
    return 0;
}
