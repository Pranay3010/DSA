#include<stdio.h>

// Base Case
// recursive call or  self call
// it is fast than normal function
// Wap to find factorial of a num using recursion

int findFact(int n){

    // Base Case

    if(n==1){
        return 1;
    }

    // recursive call or  self call
    return n*findFact(n-1);
}


int main(){
    int num =5;
    int r =findFact(5);
    printf("%d",r);
    return 0;
}