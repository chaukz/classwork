#include <iostream>
int main() {
    
char *pGrades = NULL;
int size ;

std::cout << "Enter the grades: ";
std::cin >> size;

pGrades = new char[size];

for (int i = 0; i < size; i++)
{
    std::cout << "Enter grade " << i + 1 << ": ";
    std::cin >> pGrades[i];
}

for (int i = 0; i < size; i++)
{
    std::cout << "Grade " << i + 1 << ": " << pGrades[i] << std::endl;
}
delete[] pGrades;
    return 0;

}
