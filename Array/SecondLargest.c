// 1.how to remove duplicate from array
// how would you find second largest element in array without sorting

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

    int secondmax= ptr[1];

    for(int j=1;j<l;j++){
        if(*(ptr+j)>secondmax ){
            secondmax=*(ptr+j);
            
        }
    }
    printf("SecondMaximum :%d",secondmax);
    return 0;
}



 int main(){

    int arr[] = {2,99,3,4,5,6,33,7,66,88,1};
    int *ar = arr;
    int length = sizeof(arr)/sizeof(arr[0]);
  
    max(ar,length);

    return 0;
}