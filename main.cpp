#include <iostream>
    
void swap(std::string &a, std::string &b);
    
int main()
{
    
std::string x = "cool aid";
std::string y = "water";

swap(x, y);
std::cout << "x: " << x << std::endl;
std::cout << "y: " << y << std::endl;
    return 0;
}

void swap (std::string &a, std::string &b)
{
    std::string temp = a;
    a = b;
    b = temp;
}
