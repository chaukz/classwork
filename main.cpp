#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairList_t;
//typedef std::string text_t;
//typedef int number_t;

using text_t = std::string;
using number_t = int;

int main(){
std::string name ;
int age ;
std::cout << "Enter your name: ";
std::getline(std::cin >> std::ws, name); // Use getline to allow spaces in the name

std::cout << "Enter your age: ";
std::cin >> age;

std::cout << "Hello, " << name << "!" << std::endl;
std::cout << "You are " << age << " years old." << std::endl;
return 0;
}   