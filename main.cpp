#include <iostream>
enum Days
{
    Monday = 0,
    Tuesday = 1,
    Wednesday = 2,
    Thursday = 3,
    Friday = 4,
    Saturday = 5,
    Sunday = 6
};
int main()
{

    Days today = Sunday;
    switch (today)
    {
    case Monday:
        std::cout << "Today is Monday" << std::endl;
        break;
    case Tuesday:
        std::cout << "Today is Tuesday" << std::endl;
        break;
    case Wednesday:
        std::cout << "Today is Wednesday" << std::endl;
        break;
    case Thursday:
        std::cout << "Today is Thursday" << std::endl;
        break;
    case Friday:
        std::cout << "Today is Friday" << std::endl;
        break;
    case Saturday:
        std::cout << "Today is Saturday" << std::endl;
        break;
    case Sunday:
        std::cout << "Today is Sunday" << std::endl;
        break;
    }
}
