// pass by value or call by value

#include<stdio.h>

void update(int a){

    a=a+1;
    printf("%d\n",a);
}
int main(){
    int a= 10;


    update(a);  // in
    printf("%d\n",a);

  return 0;
}