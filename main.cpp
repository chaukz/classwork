#include <iostream>

struct Car
{
std::string brand;
int year;
std::string colour;
};


void printCarInfo(Car c);
int main()
{
    Car car1;
    Car car2;

    car1.brand = "Toyota";
    car1.year = 2020;
    car1.colour = "Red";

    car2.brand = "Honda";
    car2.year = 2018;
    car2.colour = "Blue";

   printCarInfo(car1);
    printCarInfo(car2);
    return 0;
}

void printCarInfo(Car c)
{
    std::cout << "Brand: " << c.brand << std::endl;
    std::cout << "Year: " << c.year << std::endl;
    std::cout << "Colour: " << c.colour << std::endl;
}
