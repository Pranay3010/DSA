#include<stdio.h>
#include<stdlib.h>

void display(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertionAtEnd(int *arr, int value, int *n){

    arr = realloc(arr, (*n + 1) * sizeof(int));

    if(arr == NULL){
        printf("Memory allocation failed\n");
        return ;
    }

    (arr)[*n] = value;  // insert at end
    (*n)++;              // increase size
}

int main(){
    int n;
    printf("Enter the length of Array: ");
    scanf("%d",&n);

    int *arr = (int *)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++){
        printf("Enter the array: ");
        scanf("%d",&arr[i]);
    }

    int value, choice;

    while (1){
        printf("\n1. Display\n2. Insert at End\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch (choice){
        case 1:
            display(arr,n);
            break;

        case 2:
            printf("Enter value: ");
            scanf("%d",&value);
            insertionAtEnd(arr, value, &n);
            break;

        case 3:
            free(arr);
            exit(0);
        }
    }
}