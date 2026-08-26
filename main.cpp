#include <iostream>

struct student
{
    std::string name;
    double gpa;
    bool enrolled = true;
};

int main()
{
    student s1;
    s1.name = "John Doe";
    s1.gpa = 3.8;

    std::cout << "Student Name: " << s1.name << std::endl;
    std::cout << "GPA: " << s1.gpa << std::endl;
    std::cout << "Enrolled: " << (s1.enrolled ? "Yes" : "No") << std::endl;

    return 0;
}
