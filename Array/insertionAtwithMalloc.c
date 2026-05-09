#include<stdio.h>
#include<stdlib.h>


void insertion(int arr[], int pos, int value,int *n){

    if(pos < 0 || pos > *n+1){
        printf("\nPosition is Not Suitable\n");
        return;

    }
   
    arr = realloc(arr, (*n + 1) * sizeof(int));
    
    for(int i= *n ; i > pos ; i--){
        arr[i]= arr[i-1];
    }
    arr[pos]= value;
    *n =*n+1;
    
}

void display(int arr[] ,int *n ){


    for(int i=0; i<*n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
     int n;
     printf("Enter the length: ");
     scanf("%d",&n);

    int *arr = (int *)malloc(n*sizeof(int));
    
    for(int i=0;i<n; i++){
        printf("Enter the Array: ");
        scanf("%d",&arr[i]);
    }

    int pos , value;

    int choice;

    while (1)
    {
        printf("Enter the Operation \n 1. For Display \n 2. For Insertion \n 3. For Exit\n");
        printf("\nEnter the choice : ");
        scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        display(arr,&n);
        break;
    case 2:
        printf("\nEter the position :");
        scanf("%d",&pos);

        printf("\nEter the Value :");
        scanf("%d",&value);
        insertion(arr,pos,value,&n);
        break;
    
    case 3:
       exit(0);
    }
    }
    return 0;

}
