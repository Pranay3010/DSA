// Q4 print odd no. using pointer by making a function and passing a value in function  

#include<stdio.h>

int OddPrint( int *pt,int l){

    for(int i = 0 ; i<l; i++){
        if( !(*(pt+i)%2 == 0)){
            printf("%d\n",*(pt+i));
        } else {
            continue;
        }
    }
    return 0;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int length = sizeof(arr)/sizeof(arr[0]);

    int *ptr = arr;

    OddPrint(ptr,length);



  return 0;

}