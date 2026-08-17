#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    int grade;
    std::cout << "Enter the grade: ";
    std::cin >> grade;
    grade >= 40 ? std::cout << "Pass" << std::endl : std::cout << "Fail" << std::endl;
    
    return 0;
}
