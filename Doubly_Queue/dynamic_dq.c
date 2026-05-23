#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;

};
struct Node *front= NULL;
struct Node *rear= NULL;

void enqueueAtFront(int val){

    struct Node *newnode =(struct Node*)malloc(sizeof(struct Node));

    if(newnode==NULL){
        printf("Heap is Overflow\n");
        return;
    }

    newnode->data=val;
    if(front==NULL){
        rear = front =newnode;
        rear->next = front->next = NULL;
        rear->prev = front->prev = NULL;

    }else{

        front->prev=newnode;
        newnode->next =front;
        newnode->prev=NULL;
        front=newnode;
    }
    printf("Data Inserted %d \n",val);

}


void enqueueAtRear(int val){
    struct Node *newnode =(struct Node*)malloc(sizeof(struct Node));

    if(newnode==NULL){
        printf("Heap is Overflow\n");
        return;
    }
    newnode->data=val;
    if(front==NULL){
        rear = front =newnode;
        rear->next = front->next = NULL;
        rear->prev = front->prev = NULL;

    }else{
        rear->next=newnode;
        newnode->prev=rear;
        newnode->next=NULL;
        rear=newnode;
    }
    printf("Data Inserted %d \n",val);

}

void display(){
    if (front==NULL)
    {
        printf("Queue is Already Empty\n");
        return;
    }
    struct Node *temp= front;

    do
    {
        printf(" %d ", temp->data);
        temp=temp->next;
    } while (temp!=NULL);
    printf("\n");
    
}


int main(){

    int ch;
    int val;

    do{
        printf("-----------------QUEUE MENU---------------------\n");
    printf("1. EnqueueAtFront \n2. EqueueAtRear\n3. Display\n4.  IsEmpty\n5. IsFull\n6. Peak\n7. Exit\n");

    printf("Enter the Choice: ");
    scanf("%d",&ch);

    switch (ch){
        case 1:
            printf("Enter the Value: ");
            scanf("%d",&val);
            enqueueAtFront(val);
            break;

        case 2:
            printf("Enter the Value: ");
            scanf("%d",&val);
            enqueueAtRear(val);
            break;
        case 3:
            display();
            break;



        case 8:
            exit(0);

        default:
            printf("Wrong Input");
            break;

    }
    }while(1);


    return 0;
}