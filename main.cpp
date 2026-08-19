#include <iostream>


int main()
{
    std::string students[] = {"Alpha", "Beta", "Charlie", "Delta", "Echo"};
    int grade[] = {90, 85, 78, 92, 88};

  for (const auto& student : students)
  {
      std::cout << student << std::endl;
  }
  for (const auto& g : grade)
  {
      std::cout << g << std::endl;
  }

    return 0;   
  
}
 