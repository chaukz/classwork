#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    int temp;

    std::cout << "Enter a temperature in Celsius: ";
    std::cin >> temp;
    if (temp>0 && temp<30)
    {
        std::cout << "The temperature is moderate." << std::endl;
    }
    else if (temp<=0)
    {
        std::cout << "The temperature is cold." << std::endl;
    }
    else
    {
        std::cout << "The temperature is hot." << std::endl;
    }
    
    return 0;
}
