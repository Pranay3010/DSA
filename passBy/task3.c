// WAP to swap the values using pointer 
// Q1 swapping 4 method find ?
// Q2 maximun and minimum element of array using pointer;

#include<stdio.h>

void swap(int *A ,int *B){

    *A = *A +*B;
    *B = *A -*B;
    *A = *A -*B;

    printf("\nA-%d :B- %d",*A ,*B);
    
}

int main(){

   int a =10;
   int b = 20;
   printf("A-%d :B- %d", a,b);  // before swapping

   swap(&a,&b);

   printf("\nA-%d :B- %d", a,b);  // after swapping value change


  return 0;
}


// make using a third variable temp

// void swapping(int *a,int*b){
//     int temp = *a;
//     *a =*b;
//     *b =temp;
//     printf();
// }


// using multiplication
   
// a=2 ,b=4;
// a= a*b;                 || a=8
// b= a/b                  || 8/4 -> b=2
// a = a/b                 || 8/2 -> a =4;






