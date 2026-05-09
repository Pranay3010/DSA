
//reverse of array using two pointer


#include<stdio.h>
#include<stdlib.h>

void reverse(int arr[],int n){

    int s =0 , e =n-1;
    while(s<e){

        int temp = arr[s];
        arr[s]= arr[e];
        arr[e]=temp;
        s++;
        e--;
    }

}

void display(int arr[],int n ){


    for(int i=0; i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}



int main(){

    int arr[]= {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);

    display(arr,n);
    reverse(arr,n);
    printf("After reverse\n");
    display(arr,n);

   return 0;
}


// targeted value of static array sum