#include <iostream>
    
void printInfo(const std::string &name, int age);
    
int main()
{
    std:: string name = "John";
    int age  =21;

    printInfo(name, age);

return 0;
}
void printInfo(const std::string &name, int age)
{
    name = "Jane"; // This will not affect the original name in main since it's passed by const reference
    age = 30; // This will not affect the original age in main since it's passed by value
    std::cout << "Name: " << name << '\n'
    <<"Age: " << age << std::endl;
}