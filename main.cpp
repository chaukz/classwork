#include <iostream>
    
int getDigit( const int number);
int sumOddDigits( const std::string cardnumber);
int sumEvenDigits( const std::string cardnumber);
    
int main()
{

    std::string name = "John Doe";
    int age = 30;
std::string freePizzas[5] = {"Margherita", "Pepperoni", "Hawaiian", "Veggie", "BBQ Chicken"};

    std::string *pname = &name;
    int *page = &age;
    std::string *pfreePizzas = freePizzas;

    std::cout << "Name: " << *pname << std::endl;
    std::cout << "Age: " << *page << std::endl;
    std::cout << "Free Pizzas: " << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << " - " << pfreePizzas[i] << std::endl;
    }
return 0;
}