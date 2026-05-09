// 1 wap to print address of pointer
// 2 make a calculater using pointer 


#include<stdio.h>

int main(){

    int a= 20;
    int *ptr = &a;

    printf("%d",*ptr);

   // address of pointer:
   
    printf("\n%d",ptr);
    printf("\n%d",&ptr);
    printf("\n%d",&a);


    return 0;
}