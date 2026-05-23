#include<stdio.h>


void display(int n){

    if(n==11){
        return;
    }


    printf("%d\n",n);
    display(n+1);

} 


int main(){

    int n =1;
    display(n);

    return 0;
}


/// fibonacci series;