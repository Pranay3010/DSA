#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head=NULL;

void insertAtEnd(int val){

    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data=val;

    if(head==NULL){
        newnode->next=newnode;
        head=newnode;
        return;

    }
    
    struct Node *temp=head;
    // t
    // 10 20 30
    while(temp->next != head){
        temp=temp->next;
    }
    newnode->next=head;
    temp->next=newnode;

}

void insertAtFirst(int val){
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data=val;

    if(head==NULL){
        newnode->next=newnode;
        head=newnode;
        return;
    }

    struct Node *temp=head;

    newnode->next=temp;

    while (temp->next!=head)
    {
        temp=temp->next;
    }

    temp->next=newnode;

    head=newnode;

}

void insertAtPos(int pos, int val){

    if(pos==1){
        insertAtFirst(val);
        return;
    }
    

    struct Node *temp =head;
    for(int i=1;i<pos-1 && temp!=NULL ;i++){
        temp = temp->next;
    }
    if(temp == NULL){
        printf("Invalid Position");
        return;
    }

    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data=val;

    
    newnode->next=temp->next;
    temp->next=newnode;



}

void display(){
    struct Node *temp =head;

    if(head==NULL){
        printf("list is Empty\n");
        return;
    }

    do
    {
        printf("%d->",temp->data);

        temp=temp->next;
    } while (temp!=head);
    printf("head");
}


void create(int s){
    int val;
    for(int i=1;i<=s;i++){
        printf("Enter the Value :");
        scanf("%d",&val);
        insertAtEnd(val);
    }
}

int main(){
    int val;
    int pos;
    int s;


    do
    {
    int choice;   
    printf("\nEnter \n1. For Create\n2. Display\n3. InsertAtEnd \n4. InsertAtFirst \n5. InsertAtPos \n. Exit\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("Enter the size of LL: ");
        scanf("%d",&s);
        create(s);
        break;

    case 2:
        display();
        break;

    case 3:
        printf("Enter the Value to insert At End: ");
        scanf("%d",&val);
        insertAtEnd(val);
        break;
    case 4:
        printf("Enter the Value to insert At First: ");
        scanf("%d",&val);
        insertAtFirst(val);
        break;

    case 5:
        printf("Enter the Position to insert: ");
        scanf("%d",&pos);
        printf("Enter the Value to insert At Position: ");
        scanf("%d",&val);
        insertAtPos(pos,val);
    default:
        break;
    }
    } while (1);
    



    return 0;
}