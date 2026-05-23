#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    int prio;
    struct Node *next;
};

struct Node *front =NULL;

void enqueue(int val , int prio){

    struct Node *newnode =(struct Node*)malloc(sizeof(struct Node));

    if(newnode==NULL){
        printf("Heap is OverFlow:\n");
        return;
    }
    
    newnode->data=val;
    newnode->prio =prio;
    newnode->next=NULL;

    if(front==NULL || prio > front->prio){
        newnode->next=front;
        front=newnode;
    }
    else
    {
        struct Node *temp =front;
        while(temp->next != NULL && temp->next->prio >= prio){
                temp=temp->next;
            }
        newnode->next=temp->next;
        temp->next=newnode;


    }
    printf("%d data inserted and priority is %d\n",newnode->data,newnode->prio);
    

}

void dequeue(){

    if(front==NULL){
        printf("Queue is UnderFlow:\n");
        return;
    }

    struct Node *temp =front;
    front=temp->next;
    printf("%d element Dequeue",temp->data);
    free(temp);
}

void isEmpty(){
    if(front==NULL){
        printf("Queue is Empty\n");
    }else
    {
        printf("Queue is not Empty\n");
    }
    
}
void isFull(){
    struct Node *newnode =(struct Node*)malloc(sizeof(struct Node));

    if(newnode==NULL){
        printf("Heap is OverFlow:\n");
    }
    else
    {   
        free(newnode);
        printf("Heap is not Full\n");
    }
    
}

void display(){
    if (front==NULL){
        printf("Queue is Empty\n");
        return;
    }

    struct Node *temp=front;

    printf("Queue Elements are:\n");
    while(temp != NULL){
        printf(" [%d (%d)]  ",temp->data,temp->prio);
        temp=temp->next;
    }
    printf("\n");
}
    

int main(){

    
    int ch;
    int val;
    int pr;

do
{
    printf("-----------------QUEUE MENU---------------------\n");
    printf("1. Enqueue \n2. Dequeue\n3. Display\n4. IsEmpty\n5. IsFull \n6. Exit\n");

    printf("Enter the Choice: ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        printf("Enter the Value: ");
        scanf("%d",&val);
        printf("Enter the Priority: ");
        scanf("%d",&pr);
        enqueue(val,pr);
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
        isFull();
        break;

    case 6:
        exit(0);
    

    default:
        printf("Invaliud choice");
        break;
    } 
}
    while(1);


    return 0;
}