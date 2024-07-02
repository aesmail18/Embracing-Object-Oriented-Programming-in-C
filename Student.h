#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

typedef struct Student {
    Person stdInherit; //Student(child) inherits all the characteristics of the Person(parent).

    //Encapsulation: The Student structure contains private data (id), cann`t be accessed outside this file
    int id;

    //Pointers to Setter and Getter Functions, Methods: Function pointers (setID, getID) are used to simulate methods.
    void (*setID)(struct Student*, int);
    int (*getID)(struct Student*);
} Student; //The Student structure contains a Person structure as a member to achieve inheritance.

/******Methods******/
/*
	constructor
	destructor
	encapsulation and manipulation

*/
Student*  New_Student(void);
void      Delete_Student(Student* self);
void      ID_Setter(Student* self,int id);
int       ID_Getter(Student* self);

#endif // STUDENT_H_INCLUDED
