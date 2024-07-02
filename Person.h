#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#define NULL                  (void *) 0

typedef struct Person {
	//Encapsulation: The Person structure contains private data (age and name), cann`t be accessed outside this file
    int age;
    char name[50];

    //Pointers to Setter and Getter Functions, Methods: Function pointers (setAge, getAge, setName, getName) are used to simulate methods.
    void (*setAge)(struct Person*, int);
    int (*getAge)(struct Person*);
    void (*setName)(struct Person*, const char*); //const char[50] == const char *
    const char* (*getName)(struct Person*);
} Person;

/******Methods******/
/*
	constructor
	destructor
	encapsulation and manipulation

*/
Person*     New_Person(void);
void        Delete_Person(Person* self);
void        Age_Setter(Person* self,int age);
int         Age_Getter(Person* self);
void        Name_Setter(Person* self,const char* name);
const char* Name_Getter(Person* self);

#endif // PERSON_H_INCLUDED
