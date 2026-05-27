#include<stdio.h>

int gcd(int a, int b){

    if(b==0){
        return a;
    }

    return gcd(b,a%b);
}

int main(){

    int g= gcd(48,18);
    printf("%d",g);

    return 0;
}

// find the sum of number digit