#ifndef GRADUATESTUDENT_H
#define GRADUATESTUDENT_H
#include "student.h"
#include <string>
#include <iostream>

class GraduateStudent : public Student
{
private:
    std::string ThesisTitle;

public:
    GraduateStudent(std::string n, int a, double g, std::string t) : Student(n, a, g), ThesisTitle(t) {}

    std::string getThesisTitle() const { return ThesisTitle; }
    void setThesisTitle(const std::string &t) { ThesisTitle = t; }

    void display()
    {
        Student::display();
        std::cout << "Thesis Title: " << ThesisTitle << std::endl;
    }
};

#endif // GRADUATESTUDENT_H