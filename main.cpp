#include <iostream>
void walk(int steps);
int main() {
    int steps;
    std::cout << "Enter the number of steps to walk: ";
    std::cin >> steps;
    walk(steps);
    return 0;
}

void walk (int steps) {
    for (int i = 0; i < steps; ++i) {
        std::cout << "Step " << (i + 1) << std::endl;
    }
}
