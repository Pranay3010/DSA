#include<stdio.h>

int summ(int n){
    //base case
    if(n==10){
        return 10;
    }

    // Recursive call/
    return n+summ(n+1);
}



int main(){
    int n=1;
    int result=summ(n);
    printf("%d",result);

    return 0;
}