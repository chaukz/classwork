#include<iostream>

int main() {
    const int size = 99;
std::string foods[size];
fill(foods, foods + (size/3), "Pizza");
fill(foods + (size/3), foods + (size/3 * 2), "Pasta");
fill(foods + (size/3 * 2), foods + size, "Burger");

for(std::string food : foods) {
    std::cout << food << std::endl;
}
return 0;
}

