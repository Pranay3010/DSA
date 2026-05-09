// Calculate Sum of every 2 element in array using Function



#include <stdio.h>


int SumArray (int ar[], int n){
   int sum = 0;
   for (int i = 0; i < n; i+=2)
   {
     sum = sum+ar[i];
   }
   
    return sum;

}




int main(){
  int arr[] = {20,30,40,50,60};

  int n = sizeof(arr)/sizeof(arr[0]);

  printf("%d ",SumArray(arr,n));
  return 0;
}
  
