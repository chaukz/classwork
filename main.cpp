#include <iostream>
#include "student.h"
#include "GraduateStudent.h"

int main()
{
    Student student1("Alice", 20, 3.8);
    student1.display();

    GraduateStudent gradStudent("Bob", 25, 3.9, "Machine Learning");
    gradStudent.display();
    return 0;
}