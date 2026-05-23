#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *front = NULL;
struct Node *rear = NULL;



void enqueue(int val){

    struct Node *newnode =(struct Node*)malloc(sizeof(struct Node));

    if(newnode==NULL){
        printf("Heap is OverFlow:\n");
        return;
    }
    newnode->data=val;
  
    if(front == NULL){
        front=newnode;
        front->next=NULL;

        rear=newnode;
        return;

    }

    //      20
    // fr10 null 

    struct Node *temp = front;

    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=newnode;
    rear=newnode;
    newnode->next=NULL;
}

void dequeue(){
    if (front==NULL){
        printf("Queue is Empty\n");
        return;
    }

    struct Node *temp =front;
    printf("%d Poped Out\n",temp->data);
    front=temp->next;
    free(temp);

}

void display(){
    if (front==NULL){
        printf("Queue is Empty\n");
        return;
    }

    struct Node *temp=front;

    printf("Queue Elements are:\n");
    while(temp != NULL){
        printf("|%d|\n",temp->data);
        temp=temp->next;
    }
}

void isEmpty(){
    if (front==NULL){
        printf("Queue is Empty\n");
    }else{
        printf("Queue is Not Empty\n");
    }
}


int main(){

    
    int ch;
    int val;

do
{
    printf("-----------------QUEUE MENU---------------------\n");
    printf("1. Enqueue \n2. Dequeue\n3. Display\n4. IsEmpty\n5. Exit\n");

    printf("Enter the Choice: ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        printf("Enter the Value: ");
        scanf("%d",&val);
        enqueue(val);
        break;
    
    case 2:
        dequeue();
        break;

    

    case 3:
        display();
        break;

    case 4:
        isEmpty();
        break;

    case 5:
        exit(0);
    

    default:
        printf("Invaliud choice");
        break;
    } 
}
    while(1);


    return 0;
}



