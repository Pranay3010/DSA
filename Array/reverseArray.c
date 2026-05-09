#include <stdio.h>


void Reverse(int ar[], int n){
    
    // printf("%d\n",ar);
    for (int i = n-1; i >=0 ; i--)
    {
       printf("%d ",ar[i]);
    }
    
}

int main(){
    int arr[] = {10,20,30,20,50};
    int n = sizeof(arr)/sizeof(arr[0]);

 
    Reverse(arr,n);



    return 0;
}