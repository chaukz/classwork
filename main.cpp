#include<iostream>

class Human{
    public:
    std::string name;
    std::string occupation;
    int age;
    struct Address{
        std::string city;
        std::string state;
        std::string country;
    };
    Address addr;

    void eat(){
        std::cout<<"Eating"<<std::endl;
    }
    void sleep(){
        std::cout<<"Sleeping"<<std::endl;
    }
    void work(){
        std::cout<<"Working"<<std::endl;
    }
};

int main() {
 Human h1;
 h1.name = "John Doe";
 h1.occupation = "Engineer";
 h1.age = 30;
 h1.addr.city = "New York";
    h1.addr.state = "NY";
    h1.addr.country = "USA";
    h1.eat();
    h1.sleep();
    h1.work();

    std::cout << h1.name << " is a " << h1.occupation << " aged " << h1.age << " living in " << h1.addr.city << ", " << h1.addr.state << ", " << h1.addr.country << std::endl;
    return 0;
}