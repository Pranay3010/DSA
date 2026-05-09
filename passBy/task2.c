// call by reference ====== using pointer for address sharing

#include<stdio.h>
void update(int *a){

    *a=*a+1;
    printf("%d\n",*a);
}
int main(){
    int a= 10;

    printf("%d\n",a);//before updating 

    update(&a);  //calling function

    printf("%d\n",a); // after calling the functiom

  return 0;
}


// WAP to swap the values using pointer 