#include <iostream>
template <typename T, typename U>
auto max(T a, U b) {
    return (a > b) ? a : b;
}
int main() {
std::cout << "Max of 10 and 20 is: " << max(10, 20) << std::endl;
    return 0;
}
