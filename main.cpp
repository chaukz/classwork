#include <iostream>
#include <vector>
#include <cmath>

int main()
{
 std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    if (name.length() > 12){
        std::cout << "Name is too long. Please enter a name with 12 characters or fewer." << std::endl;
    } else {
        std::cout << "Hello, " << name << "!" << std::endl;
    }
    return 0;
}
