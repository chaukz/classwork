#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairList_t;
//typedef std::string text_t;
//typedef int number_t;

using text_t = std::string;
using number_t = int;

int main(){

    int correct  = 8;
    int questions = 10;

    double score = correct/(double)questions * 100;
    std::cout << "Score: " << score << "%" << std::endl;
return 0;
}   