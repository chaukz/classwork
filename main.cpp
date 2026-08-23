#include<iostream>

int main() {
   
std::string foods[5];
int size = sizeof(foods)/sizeof(foods[0]);
std::string temp;
for(int i = 0; i < size; i++) {
    std::cout << "Enter food item " << (i + 1) << ": ";
    std::getline(std::cin, temp);
    foods[i] = temp;
    if (temp== "q")
    {
        /* code */break;
    }else{
        continue;
    }
    
}
std::cout << "\nYou entered the following food items:\n";
for(std::string food : foods) {
    std::cout << food << std::endl;
}
return 0;
}

