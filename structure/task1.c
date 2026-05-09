// making a struct of employee

#include<stdio.h>
#include<string.h>


struct Employee{
    int age;
    float salary;
    char name[30];

};


int main(){

    struct Employee E1;
    E1.age = 30;
    E1.salary = 30500.50;
    strcpy(E1.name,"Alok");
    
    
    printf("%s\n",E1.name);
    printf("%d\n",E1.age);
    printf("%f",E1.salary);



    return 0;
}