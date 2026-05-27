#include<stdio.h>


int summ(int n){
    if(n==0){
        return 0;
    }



    return n%10 + summ(n/10);
    //     12%10 =2 + 12/10= summ(1)

}


int main(){

    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    printf("%d",summ(n));
}