// #include <stdio.h>

// void fibo(int a, int b, int n) {

//     if (n == 0) {
//         return;
//     }

//     printf("%d ", a);

// //       3, 2+3
// //       2, 1+2   
// //       1, 1+1
// //       1, 0+1
//     fibo(b, a + b, n - 1);
// }

// int main() {

//     int n;

//     printf("Enter number of terms: ");
//     scanf("%d", &n);

//     fibo(0, 1, n);

//     return 0;
// }


///////////////---------/////////////////
//Sir

#include<stdio.h>


int fibo(int n){
    //base case
    if(n==0){
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    
    return fibo(n-1)+fibo(n-2);
}


int main(){
    int n=10;
    for (int i = 0; i < n; i++)
    {
        printf(" %d ",fibo(i));
    }
    
    return 0;
}