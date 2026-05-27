#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *front = NULL;
struct Node *rear = NULL;

// Insert at Front
void enqueueAtFront(int val){

    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));

    if(newnode == NULL){
        printf("Heap Overflow\n");
        return;
    }

    newnode->data = val;
    newnode->prev = NULL;
    newnode->next = NULL;

    // Empty Queue
    if(front == NULL){
        front = rear = newnode;
    }
    else{
        newnode->next = front;
        front->prev = newnode;
        front = newnode;
    }

    printf("Inserted at Front: %d\n", val);
}

// Insert at Rear
void enqueueAtRear(int val){

    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));

    if(newnode == NULL){
        printf("Heap Overflow\n");
        return;
    }

    newnode->data = val;
    newnode->next = NULL;
    newnode->prev = NULL;

    // Empty Queue
    if(front == NULL){
        front = rear = newnode;
    }
    else{
        rear->next = newnode;
        newnode->prev = rear;
        rear = newnode;
    }

    printf("Inserted at Rear: %d\n", val);
}

// Delete from Front
void dequeueFromFront(){

    if(front == NULL){
        printf("Queue is Empty\n");
        return;
    }

    struct Node *temp = front;

    // Only one node
    if(front == rear){
        front = rear = NULL;
    }
    else{
        front = front->next;
        front->prev = NULL;
    }

    printf("Deleted from Front: %d\n", temp->data);
    free(temp);
}

// Delete from Rear
void dequeueFromRear(){

    if(rear == NULL){
        printf("Queue is Empty\n");
        return;
    }

    struct Node *temp = rear;

    // Only one node
    if(front == rear){
        front = rear = NULL;
    }
    else{
        rear = rear->prev;
        rear->next = NULL;
    }

    printf("Deleted from Rear: %d\n", temp->data);
    free(temp);
}

// Display Queue
void display(){

    if(front == NULL){
        printf("Queue is Empty\n");
        return;
    }

    struct Node *temp = front;

    printf("Queue: ");

    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

int main(){

    int ch, val;

    while(1){

        printf("\n-------- DEQUE MENU --------\n");
        printf("1. Insert at Front\n");
        printf("2. Insert at Rear\n");
        printf("3. Delete from Front\n");
        printf("4. Delete from Rear\n");
        printf("5. Display\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &ch);

        switch(ch){

            case 1:
                printf("Enter Value: ");
                scanf("%d", &val);
                enqueueAtFront(val);
                break;

            case 2:
                printf("Enter Value: ");
                scanf("%d", &val);
                enqueueAtRear(val);
                break;

            case 3:
                dequeueFromFront();
                break;

            case 4:
                dequeueFromRear();
                break;

            case 5:
                display();
                break;

            case 6:
                exit(0);

            default:
                printf("Invalid Choice\n");
        }
    }

    return 0;
}