#include<stdio.h>
#include<stdlib.h>


void insertion(int arr[], int pos, int value,int *n){

    if(pos < 0 || pos > *n+1){
        printf("\nPosition is Not Suitable\n");
        return;
    }

    for(int i= *n ; i > pos ; i--){
        arr[i]= arr[i-1];
    }
    arr[pos]= value;
    *n =*n+1;
    
}


void deletion(int arr[],int pos,int*n){

    if(pos < 0 || pos > *n){
        printf("\nPosition is Not Suitable\n");
        return;
    }
 
    for(int i =pos;i<*n;i++){
        arr[i]=arr[i+1];
    }
    *n=*n-1;



}
void display(int arr[],int *n ){


    for(int i=0; i<*n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){

    int arr[] = {10,20,30,40,50};
    int pos , value;
    int n = sizeof(arr)/sizeof(arr[0]);

    int choice;

    while (1)
    {
        printf("Enter the Operation \n 1. For Display \n 2. For Insertion \n 3. For Deletion \n 4. For Exit\n");
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
        printf("\nEter the position :");
        scanf("%d",&pos);

    
        deletion(arr,pos,&n);
        break;
    
    case 4:
       exit(0);
    }
    }
    return 0;

}


// Wap to make it in dynamic array using malloc or calloc;