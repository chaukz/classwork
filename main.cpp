#include <iostream>

double getTotal(double prices[], int size);
int main()
{
    double prices[5] = {19.99, 29.99, 39.99, 49.99, 59.99};
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = getTotal(prices, size);

    std::cout << "Total: $" << total << std::endl;
    return 0;
}
double getTotal(double prices[], int size)
{
    double total = 0.0;

    for (int i = 0; i < size; ++i)
    {
        total += prices[i];
    }
    return total;
}