#include<stdio.h>

void moveZeroes(int arr[], int n){
    int count = 0; // position for non-zero elements

    // Step 1: Move all non-zero elements to front
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            arr[count] = arr[i];
            count++;
        }
    }
    
    // Step 2: Fill remaining positions with zero
    while(count < n){
        arr[count] = 0;
        count++;
    }


     for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int arr[] = {10,20,0,40,0,60,0,70};
    int n = sizeof(arr)/sizeof(arr[0]);

    moveZeroes(arr, n);

    return 0;
}


// wrong method

