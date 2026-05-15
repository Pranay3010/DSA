#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;

};

struct Node *top = NULL;

void push(int data){

    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    
    if (newnode->next==NULL)
    {
        printf("Heap OverFlow");
        return;
    }
    newnode->data=data;
    newnode->next=top;
    top=newnode;

    printf("Data Added\n");

}

void pop(){
    if (top==NULL)
    {
        printf("Stack is Underflow\n");
        return;
    }
    struct Node *temp=top;
    printf("stack top element : %d and poped out\n",top->data);
    top=top->next;
    free(temp);
    

}

void peek(){
    if (top == NULL){
        printf("Stack is Empty\n");
        return;

    }

    printf("The top element of stack is %d\n",top->data);


}

void isEmpty(){
    if (top == NULL){
        printf("Stack is Empty\n");
    }else {
        printf("Stack is Not Empty\n");
    }
}

void isFull(){
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    if(newnode==NULL){
        printf("Stack is Full\n");
    }else {
        printf("Stack is not Full\n");
    }

}

void create(int s){
    int data;
    for (int i = 1; i <=s; i++)
    {
        printf("Enter the Data to push:");
            scanf("%d",&data);
            push(data);
    }
    
}

void display(){
    if (top==NULL){
        printf("Stack is Empty\n");
        return;
    }

    struct Node *temp=top;

    printf("Stack Elements are:\n");
    while(temp != NULL){
        printf("|%d|\n",temp->data);
        temp=temp->next;
    }
}



int main(){
    int data;
    int ch;
    int s;

    do
    {
        printf("---------Dynamic Stack Menu--------\n");
        printf("1. Creata \n2. Push\n3. Pop\n4. Peek\n5. isEmpty\n6. isfull\n7. Display\n8. Exit\n\n");

        printf("Enter the Choice to perform : ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            printf("How many element you want to insert into stack :");
            scanf("%d",&s);
            create(s);
            break;




        case 2:
            printf("Enter the Data to push:");
            scanf("%d",&data);
            push(data);
             break;

        case 3:
            pop();
            break;

        case 4:
            peek();
            break;

        case 5:
            isEmpty();
            break;

        case 6:
            isFull();
            break;
            
        case 7:
            display();
            break;

        case 8:
            exit(0);
        
        default:
            printf("Invalid Choice");
            break;
        }


    } while (1);
    
    return 0;

}