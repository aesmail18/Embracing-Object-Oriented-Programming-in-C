#include "Person.h"
#include "Student.h"

Student* New_Student(){
    Student* object = (Student*) malloc(sizeof(Student));
    if(object != NULL){
        object->id = 0;
        object->setID = ID_Setter;
        object->getID = ID_Getter;
    }
}

void Delete_Student(Student* self){
    if(self != NULL){
		free(self);
		self = NULL;
	}
}

void ID_Setter(Student* self,int id){
    self->id = id;
}

int ID_Getter(Student* self){
    return self->id;
}

