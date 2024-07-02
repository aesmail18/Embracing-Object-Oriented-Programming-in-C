#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Person.h"
#include "Student.h"

/*
	Polymorphism: Function pointers in the base class (Person) and derived class (Student) allow methods to be called
	 on different types of objects. In this example, setAge, getAge, setName, and getName are polymorphic methods
	 accessible through the base class.
*/

int main()
{
    // Create a new Student instance
    Student* s1 = New_Student();

    // Set age, name, and student ID
    s1->stdInherit.setName(&s1->stdInherit, "Ahmed");
    s1->stdInherit.setAge(&s1->stdInherit, 25);
    s1->setID(s1, 12345);

    // Get and print age, name, and student ID
    printf("Name: %s\n", s1->stdInherit.getName(&s1->stdInherit));
    printf("Age: %d\n", s1->stdInherit.getAge(&s1->stdInherit));
    printf("Student ID: %d\n",s1->getID(s1));

    // Delete Student instance
    Delete_Student(s1);

    return 0;
}
