// Display Array using for loop
#include<stdio.h>

void display(int ar[], int n){

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    
}

int SumArray (int ar[], int n){
   int sum = 0;
   for (int i = 0; i < n; i++)
   {
     sum = sum+ar[i];
   }
   
    return sum;

}


int main(){
    int arr[] = {20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);


    display(arr,n);
    printf("\n%d",SumArray(arr,n));
    return 0;
}