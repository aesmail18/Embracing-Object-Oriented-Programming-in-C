#include "Person.h"

Person* New_Person(){
    Person* object = (Person*) malloc(sizeof(Person));
	if(object != NULL){
		object->age = 0;
		object->name[0] = '\0';
		object->setAge = Age_Setter;
		object->getAge = Age_Getter;
		object->setName = Name_Setter;
		object->getAge = Name_Getter;
	}
	return object;
}

void Delete_Person(Person* self){
    if(self != NULL){
		free(self);
		self = NULL;
	}
}

void Age_Setter(Person* self,int age){
    self->age = age;
}

int Age_Getter(Person* self){
    return self->age;
}

void Name_Setter(Person* self,const char* name){
    strncpy(self->name,name,(sizeof(self->name) - 1)); //strncpy is used to copy up to sizeof(self->name) - 1 characters from the name string to the self->name array.
	self->name[(sizeof(self->name) - 1)] = '\0'; //This explicitly sets the last character of the self->name array to '\0' (null terminator), ensuring the string is properly terminated.
}

const char* Name_Getter(Person* self){
    return self->name;
}
