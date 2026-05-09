#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the array Size:");
    scanf("%d",&n);

    int *arr = (int *)calloc(n, sizeof(int));

    // *arr = 20;
    // *(arr+1)=30;




    for (int j = 0; j <n; j++)
    {   
        printf("Enter value of %d array:",j);
        scanf("%d",(arr+j));
    }
    for (int i = 0; i <n; i++)
    {
        printf("%d  ",*(arr+i));
    }
    

    free(arr);
    return 0;
}