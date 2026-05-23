#include<stdio.h>
#include<stdlib.h>
#define Max 3


int queue[Max];
int front =-1;
int rear = -1;


void enqueue(int val){

    if(rear == Max-1){
        printf("Queue is OverFlow\n");
        return;
    }
    else{
        if (front==-1){
            front++;}
        rear++;
        queue[rear]=val;
         
    }

}

void dequeue(){
    if (front==-1  || front > rear)
    {
        printf("Queue is UnderFlow\n");
        return;
    }
    printf("%d Deleted\n",queue[front]);
    front++;
    
}

void isEmpty(){
    if (front==-1  || front > rear)
    {
        printf("Queue is Empty\n");                                                                                                              
    }else{
        printf("Queue is Not Empty\n");
    }
}

void display(){
    if(front==-1  || front > rear){
        printf("Queue is Empty\n");
        return;
    }
    printf("Queue elements are\n");

    for(int i= front;i<=rear;i++){
        printf("[%d]",queue[i]);
    }
    printf("\n");


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
    default:
        printf("Invaliud choice");
        break;
    }
} while (1);

}