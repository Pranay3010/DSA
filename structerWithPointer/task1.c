// it is a user defined data type;  collection of different types of data

#include<stdio.h>
#include<string.h>

typedef struct Student{
    int age;
    char name[20];

} Student;


void show(Student *ptr){
    printf("Name is %s & Age is %d",ptr->name,ptr->age);
}

int main(){
    Student S1;
    Student *ptr = &S1;

    ptr->age =20;
    strcpy(ptr->name,"Pranay");

    show(ptr);


    return 0;
}
