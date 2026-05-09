#include<stdio.h>
#include<stdlib.h>

void insertionAtStart(int *arr, int value, int *n){
    // Reallocate memory
    arr = realloc(arr, (*n + 1) * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return ;
    }

    // Shift elements to right
    for(int i = *n; i > 0; i--){
        (arr)[i] = (arr)[i-1];
    }

    // Insert new value at start
    (arr)[0] = value;
    (*n)++;
}

void display(int arr[], int *n){
    for(int i = 0; i < *n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int n;
    printf("Enter the length: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++){
        printf("Enter the Array: ");
        scanf("%d", &arr[i]);
    }

    int value, choice;

    while (1){
        printf("\nEnter the Operation\n");
        printf("1. Display\n2. Insert at Start\n3. Exit\n");
        printf("Enter the choice: ");
        scanf("%d", &choice);

        switch (choice){
            case 1:
                display(arr, &n);
                break;

            case 2:
                printf("Enter the Value: ");
                scanf("%d", &value);
                insertionAtStart(arr, value, &n);
                break;

            case 3:
                free(arr);
                exit(0);
        }
    }
    return 0;
}