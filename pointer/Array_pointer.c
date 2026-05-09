#include<stdio.h>

int main(){

    int arr[] = {10,20,30,40,50};
    int *ptrarr = arr;  // not using & also gives address of arr in case of array

    printf("%d",*ptrarr);  // gives value 10 of stored address 
    printf("\n%d",ptrarr);  // address


    *ptrarr=*ptrarr + 20;   // change value in index 1 + 20
    printf("\n%d",*ptrarr);

    ptrarr= ptrarr + 1;  // change the index by adding one(1) int so now pointer store address of index 1 
    printf("\n%d",*ptrarr);  // 20
    printf("\n%d",ptrarr);  // address of 1 index


    printf("\nSecond Index");
    ptrarr = ptrarr + 1;  // change the index by adding one(1) int so now pointer store address of index 2
    printf("\n%d",*ptrarr);  // 30
    printf("\n%d",ptrarr);  // address of 2 index


    



}