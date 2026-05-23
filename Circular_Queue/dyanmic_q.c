#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
struct Node *front= NULL;
struct Node *rear= NULL;

void enqueue(int val){

    struct Node *newnode =(struct Node*)malloc(sizeof(struct Node));

    if(newnode==NULL){
        printf("Heap is Overflow\n");
        return;
    }

    newnode->data=val;
    if(front==NULL){
        rear = front =newnode;
        rear->next=newnode;
    }else{

        rear->next=newnode;
        rear=newnode;
        rear->next=front;
    }
    printf("Data Inserted%d \n",val);

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
    } while (temp!=front);
    printf("\n");
    
}

void dequeue(){
    if (front==NULL)
    {
        printf("Queue is Empty\n");
        return;
    }

    if(front==rear){
        printf("%d data Dequeued\n",front->data);
        free(front);
        front = rear = NULL;
    }else{
        struct Node *temp =front;
        printf("%d data Dequeued\n",temp->data);
        front= temp->next;
        rear->next=front;
        free(temp);

    }
    
}

void isEmpty(){
    if (front==NULL)
    {
        printf("Queue is Empty\n");
        
    }else
    {
        printf("Queue is Not Empty\n");
    }
    
}

void isFull(){
    struct Node *newnode =(struct Node*)malloc(sizeof(struct Node));

    if(newnode==NULL){
        printf("Heap is FULL\n");
    }else
    {
        printf("Heap is Not Full\n");
        free(newnode);
    }
    

}

void peak(){
    if (front==NULL)
    {
        printf("Queue is Empty\n");

    }
    else
    {
        printf("%d is peak of Queue\n",front->data);
    }
    
    
}



int main(){

    int ch;
    int val;

    do{
        printf("-----------------QUEUE MENU---------------------\n");
    printf("1. Enqueue \n2. Dequeue\n3. Display\n4. IsEmpty\n5. IsFull\n6. Peak\n7. Exit\n");

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
        isFull();
        break;



    case 6:
        peak();
        break;


    case 7:
        exit(0);
    

    default:
        printf("Invaliud choice");
        break;
    }
    
    

    }while(1);


    return 0;
}



// ring buffer = circular Queue
// Double Ended Queue = Deck