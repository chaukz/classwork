#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    double temp;
    char unit;
    std::cout << "Enter temperature (e.g., 32 F or 0 C): ";
    std::cin >> temp >> unit;
    if (unit == 'F' || unit == 'f')
    {
        double celsius = (temp - 32) * 5.0 / 9.0;
        std::cout << temp << " F is " << celsius << " C" << std::endl;
    }
    else if (unit == 'C' || unit == 'c')
    {
        double fahrenheit = (temp * 9.0 / 5.0) + 32;
        std::cout << temp << " C is " << fahrenheit << " F" << std::endl;
    }
    else
    {
        std::cout << "Invalid unit. Please enter 'F' for Fahrenheit or 'C' for Celsius." << std::endl;
    }
    return 0;
}
