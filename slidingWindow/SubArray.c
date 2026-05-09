// find the sum of window size

#include<stdio.h>

int findMaxSumOfArray(int arr[], int n, int ws){
    if (ws>n)
    {
        printf("Window size is Invalid");
        return 0;

    }
    
    int sum =0;
    for(int i=0; i<ws; i++){
        sum +=arr[i];
    }
    int maxsum = sum;
    for(int j=ws; j<n; j++){
        sum += arr[j];
        sum -= arr[j-ws];
        if(sum > maxsum){
            maxsum =sum;
        }
    }
return maxsum;
}

int main(){
    
    int arr[]= {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int window_size=2;

    int result =findMaxSumOfArray(arr,n,window_size);
    printf("%d",result);









    return 0;
}


// WAP to find the string is palandrom or not
// WAP to shift the all zeroes to the last in sorted array;
//find the first negative of all  window ;
