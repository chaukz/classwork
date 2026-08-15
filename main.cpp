#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    double x, y, z;

    std::cout << "Enter X Value: ";
    std::cin >> x;

    std::cout << "Enter Y Value: ";
    std::cin >> y;

    z = sqrt(pow(x, 2) + pow(y, 2));

    std::cout << "The value of Z is: " << z << std::endl;
}
