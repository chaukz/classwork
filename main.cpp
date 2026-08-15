#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairList_t;
//typedef std::string text_t;
//typedef int number_t;

using text_t = std::string;
using number_t = int;

int main(){
   
    int students = 20;
    //students = students+!;
    //students+=2;
    //students ++
    if (students % 2 == 0)
    {
        std::cout << "Number of students is even" << std::endl;
    }else
    {
        std::cout << "Number of students is odd" << std::endl;
    }
    std::cout << "Number of students: " << students << std::endl;
return 0;
}   