#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairList_t;
//typedef std::string text_t;
//typedef int number_t;

using text_t = std::string;
using number_t = int;

int main(){

    text_t firstname = "boni";
    number_t age = 25;
    std::cout << "Hello, " << firstname << "!" << std::endl;
    std::cout << "You are " << age << " years old." << std::endl;
    return 0;
}