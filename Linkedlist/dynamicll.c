#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head =NULL;

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


void insertAtFirst(int val){
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));

    newnode->data = val;
    newnode->next = head;  // point to current head

    head = newnode;        // update head
}
void insertAtPosition(int val,int pos){
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data=val;

    if(pos==1){
        insertAtFirst(val);
        return;
    }
    
    struct Node *temp = head;

    for(int i=1; i<pos-1 && temp!=NULL; i++){
        temp=temp->next;
    }
    if(temp==NULL){
        printf("Invalid position\n");
        return;
    }

    newnode->next=temp->next; // temp mai rakha  address newnode mai de do

    temp->next=newnode;  // or temp ke next mai newnode ka address de do
}

void removeFromBigning(){
    struct Node *temp = head;
    if(temp==NULL){
        printf("List is Already Empty:");
        return ;
    }

    head=temp->next;
    
    free(temp);

}
void removeFromEnd(){
    struct Node *temp = head;
    if(temp==NULL){
        printf("List is Already Empty:");
        return ;
    }
    
    if(temp->next==NULL){
        free(temp);
        head=NULL;
        return;
    }

    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
}

void removeAtPos(int pos){
    struct Node *temp = head;
    if(temp==NULL){
        printf("List is Already Empty:");
        return ;
    }
    if(pos==1){
        removeFromBigning();
        return;
    }

    for(int i=1; i<pos-1 && temp->next !=NULL ;i++){
        temp=temp->next;
    }
    if(temp->next==NULL){
        printf("Invalid Position");
        return;
    }

    struct Node *del=temp->next;
    temp->next =del->next;
    free(del);
}

void create(int s){
    int val;
    for(int i=0;i<s;i++){
        printf("Enter the Value: ");
        scanf("%d",&val);
        insertAtEnd(val);

    }
}


void update(int pos, int val){
    struct Node *temp = head;
    if(temp==NULL){
        printf("List is Already Empty:");
        return ;
    }

    for(int i=1; i<pos;i++){
        temp=temp->next;
    }

    if(temp==NULL){
        printf("Invalid position\n");
        return;
    }
    temp->data=val;

}

void search(int val){
        struct Node *temp = head;
        if(temp==NULL){
            printf("List is Already Empty:");
            return ;
        }
        int pos =1;
        for(int i=1; temp != NULL ; i++){
            if(temp->data==val){
                printf("Element found in %d position \n",pos);
                return;
            }
            else{
                temp=temp->next;
            }
            pos +=1;
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
        printf("1.Create\n2. InserteAtEnd\n3. InsertAtFirst\n4. Display\n5. InsertAtPosition\n6. RemovefromBigning\n7. RemoveFromEnd\n8. RemoveAtPos\n9. Update Value \n10. Search \n11. exit\n");
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
            printf("Enter the Value: ");
            scanf("%d",&val);
            insertAtEnd(val);
            break;
        case 3:
            printf("Enter the Value: ");
            scanf("%d",&val);
            insertAtFirst(val);
            break;

        case 4:
            display();
            break;

        case 5:
            printf("Enter the Value: ");
            scanf("%d",&val);

            printf("Enter the position: ");
            scanf("%d",&pos);

            insertAtPosition(val,pos);
            break;

        case 6:
            removeFromBigning();
            break;
        
        case 7:
            removeFromEnd();
            break;
        
        case 8:
            printf("Enter the Position: ");
            scanf("%d",&pos);
            removeAtPos(pos);
        
        case 9:
            printf("Enter the Position To Update: ");
            scanf("%d",&pos);

            printf("Enter the New Value:");
            scanf("%d",&val);
            update(pos,val);

        case 10:
            printf("Enter the value to search :");
            scanf("%d",&val);
            search(val);
            
        default:
            break;
        }



    } while (1);

    

    return 0;
}



// Q insert at first


// update at pos
// search 