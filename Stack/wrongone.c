#include<stdio.h>
#include<stdlib.h>
#define Max 3

int top= -1;
int *stack;



void push(int data){

    if(top== Max-1){
        printf("Stack OverFlow\n");
        return;

    }
    top++;
    stack[top]=data;
    printf("Data Added\n");

}
void pop(){
    if(top==-1){
        printf("Stack UnderFlow\n");
        return;
        
    }
    printf("stack top element : %d and poped out\n",stack[top]);
        top--;

}

void peek(){
    if (top == -1){
        printf("Stack is Empty\n");
        return;

    }

    printf("The top element of stack is %d\n",stack[top]);


}

void isEmpty(){
    if (top == -1){
        printf("Stack is Empty\n");
    } else{
        printf("Stack is Not Empty\n");
    }
}

void isFull(){
     if (top == Max-1){
        printf("Stack is Full\n");
    } else{
        printf("Stack is Not Full\n");
    }

}
void display(){

    if (top == -1){
        printf("Stack is Empty\n");
        return;

    }

    printf("Stack Element Are \n");
    for (int i = top; i >= 0; i--)
    {
        printf("|%d|\n",stack[i]);
    }
    
}





int main(){
    int data;
    int ch;
    int n;
    printf("Inset size of array");
    scanf("%d",&n);
    stack = (int*)malloc(n* sizeof(int));

    do
    {
        printf("---------Stack Menu--------\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. isEmpty\n5. isfull\n6. Display\n7. Exit\n\n");

        printf("Enter the Choice to perform : ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            printf("Enter the Value to push:");
            scanf("%d",&data);
            push(data);


            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            isEmpty();
            break;

        case 5:
            isFull();
            break;
            
        case 6:
            display();
            break;

        case 7:
            exit(0);
        
        default:
            break;
        }


    } while (1);
    
    return 0;

}