// Q3 using pointer traverse all elements of the array using a function 
// Q4 print odd no. using pointer by making a function and passing a value in function  

#include<stdio.h>


int traverse (int *pt, int l){


   for(int i=0; i<l ;i++){
    printf("%d\n",*(pt+i));
   }
   return 0;
}

int main(){
 int arr[] = {20,30,40,50,60};

 int *ptr = arr;
 int length = sizeof(arr)/sizeof(arr[0]);

 traverse(ptr,length);

 return 0;
}