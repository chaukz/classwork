#include <iostream>

int main()
{
    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if (pointer == nullptr)
    {
        std::cout << "Pointer is null." << std::endl;
    }
    else
    {
        std::cout << "Pointer is not null." << std::endl;
    }
    return 0;
}