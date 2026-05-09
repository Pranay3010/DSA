#include<stdio.h>
#include<stdlib.h>

int main(){
    int n =5;

    // int s =n;
    int *arr = (int*)malloc(n*sizeof(int));

    
    
    for(int i=0;i<n;i++){
        printf("Enter the value: ");
        scanf("%d", (arr+i));

}
    
int i;

    for(i=0;i<n;i++){
        printf("%d ",*(arr+i));


    }


   // realloc
// returns a void pointer = void*
// 2 parameters , jisme aapko 


printf(" \nMemmor after realloc\n");

n =7;
arr = (int*)realloc(arr,n*sizeof(int));
// 1 2 3 4 5 gv gv 
  
for(int j=i; j< n; j++){
    printf("Enter the value: ");
    scanf("%d", (arr+j));

}

printf("\n");
  

  for(int j=0; j< n; j++){
    printf("%d ",*(arr+j));
  }

  return 0;

}