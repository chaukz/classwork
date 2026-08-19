#include <iostream>


int main()
{
    std::string students[] = {"Alpha", "Beta", "Charlie", "Delta", "Echo"};
    std::cout << "List of students:\n";
    for (int i = 0; i < sizeof(students) / sizeof(students[0]); ++i) {
        std::cout << students[i] << std::endl;
    }
  return 0;
}
