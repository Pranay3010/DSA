// Q2 maximun and minimum element of array using pointer;  //call by refernce->
#include<stdio.h>

int max(int *ptr, int l){
    int maximum = ptr[0];

    for (int i =0; i<l;i++){
     if (*(ptr+i)>maximum){
        maximum=*(ptr+i);

     } else{
        maximum=maximum;
     }
    }
    printf("Maximum :%d\n",maximum);
    return 0;

}

int min(int *ptr, int l){
    int minimum = ptr[0];

    for (int i =0; i<l;i++){
     if (*(ptr+i)<minimum){
        minimum=*(ptr+i);

     } else{
        minimum=minimum;
     }
    }
    printf("Minimum :%d\n",minimum);
    return 0;

}
 int main(){

    int arr[] = {99,2,3,4,5,6,33,7,66,88,1};
    int *ar = arr;
    int length = sizeof(arr)/sizeof(arr[0]);
  
    max(ar,length);
    min(ar,length);


    return 0;
}