#include<stdio.h>

void ArrayPointSum(int arr[],int n , int target){

    int s=0, e=n-1;
    int sum;
    while(s<e){
        sum = arr[s]+arr[e];
        if(sum==target){
            printf("The target includes index %d and %d",arr[s],arr[e]);
        }
        else if (sum<target)
        {
        s++;                 
        }
        else if(sum>target){
        e--;
        }

    }
}

int main(){
   int arr[]= {10,20,30,40,50};
   int n =sizeof(arr)/sizeof(arr[0]);

    int target=80;
    ArrayPointSum(arr,n,target);

return 0;
}