#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iostream>

class Student
{
protected:
    std::string name;
    int age;
    double gpa;

public:
    Student(std::string n, int a, double g) : name(n), age(a), gpa(g) {}

    void display()
    {
        std::cout << "Name: " << name << ", Age: " << age << ", GPA: " << gpa << std::endl;
    }

    std::string getName() const { return name; }
    int getAge() const { return age; }
    double getGPA() const { return gpa; }

    void setName(const std::string &n) { name = n; }
    void setAge(int a) { age = a; }
    void setGPA(double g) { gpa = g; }

    std::string toString() const
    {
        return "Name: " + name + ", Age: " + std::to_string(age) + ", GPA: " + std::to_string(gpa);
    }
};

#endif // STUDENT_H