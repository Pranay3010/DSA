// Print the address of pointer 

#include<stdio.h>

int main(){

    int a = 30;
    int *ptr = &a;

    printf("%d",ptr);   // return the address stored in ptr
    printf("\n%d",&a);  // returns the original address s

    return 0;
}

