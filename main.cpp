#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    char op;
    double num1, num2, result;

    std::cout << "********Calculator********\n";
    std::cout << "Enter either (+), (-), (*), (/) or (^) for the operation you want to perform: ";
    std::cin >> op;

    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    switch(op)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        case '^':
            result = std::pow(num1, num2);
            break;
        default:
            std::cout << "Error! Operator is not correct";
            return 1;
    }

    std::cout << "*****************************";
    std::cout << "Result: " << result << std::endl;
    std::cout << "*****************************";

    return 0;
}
