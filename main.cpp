#include <iostream>


int Search(int numbers[], int size, int myNum);
int main()
{
  int numbers[] = {1, 2, 3, 4, 5};
  int size = sizeof(numbers) / sizeof(numbers[0]);
  int index;
  int myNUm;

    std::cout << "Enter a number to search for: ";
    std::cin >> myNUm;
    index = Search(numbers, size, myNUm);
    if (index != -1)
    {
      std::cout << "Number found at index: " << index << std::endl;
    }
    else
    {
      std::cout << "Number not found." << std::endl;
    }
return 0;;
}
int Search(int numbers[], int size, int myNum)
{
  for (int index = 0; index < size; index++)
  {
    if (numbers[index] == myNum)
    {
      return index;
    }
  }
  return -1;
}