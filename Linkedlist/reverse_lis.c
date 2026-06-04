#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head =NULL;
struct Node *prev =NULL;

void reverseList(){

    if(head == NULL){
        printf("List is Empty\n");
        return;
    }

    struct Node *prev = NULL;
    struct Node *temp = head;
    struct Node *nextNode = NULL;

    while(temp != NULL){

        // Store next node
        nextNode = temp->next;

        // Reverse link
        temp->next = prev;

        // Move pointers
        prev = temp;
        temp = nextNode;
    }

    // Update head
    head = prev;

    printf("List Reversed Successfully\n");
}

void insertAtEnd(int val){

    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data=val;
    newNode->next=NULL;

    if(head == NULL){
        head =newNode;
        return;
    }

    struct Node *temp = head;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}

void create(int s){
    int val;
    for(int i=0;i<s;i++){
        printf("Enter the Value: ");
        scanf("%d",&val);
        insertAtEnd(val);

    }
}


void display(){
    if (head==NULL){
        printf("The list is Empty \n");
    }

    struct Node *temp=head;
     while(temp!=NULL){
        printf("%d ->",temp->data);
        temp =temp->next;
     }
     printf("NULL\n");
}


int main(){

    int ch;
    int s;
    int val;
    int pos;
    do
    {
        printf("LL menu\n");
        printf("1.Create\n2. Display\n3. InsertAtEnd \n4. Reverse the lis\n");
        printf("Enter the choice: ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            printf("Enter the list size: ");
            scanf("%d",&s);
            create(s);
            break;
        
        case 2:
            display();
            break;
        
        case 3:
            printf("Enter the Value: ");
            scanf("%d",&val);
            insertAtEnd(val);
            break;
        
        case 4:
            reverseList();
            break;
        
        case 5:
            exit(0);
            break;

        default:
            printf("Invalid Choice");
        }
    }
        while (1);


    return 0;
}
        
        