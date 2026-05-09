#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;

};
struct Node *head=NULL;

void insertAtEnd(int val){
    struct Node *newnode =(struct Node*)malloc(sizeof(struct Node));
    newnode->data=val;
    newnode->next=NULL;

    if(head==NULL){
        newnode->prev=NULL;
        head = newnode;
        
        return;
    }
    struct Node *temp=head;

    while(temp->next !=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
}

void insertAtFirst(int val ){
    struct Node *newnode =(struct Node*)malloc(sizeof(struct Node));
    newnode->data=val;
    newnode->prev=NULL;

    if(head==NULL){
        newnode->next=NULL;
        head = newnode;
        
        return;
    }
    struct Node *temp=head;


    newnode->next = temp;
    temp->prev = newnode;
    head = newnode;
}


void insertAtPos(int pos , int val){

    if (pos==1){
        insertAtFirst(val);
        return;
    }

    struct Node *temp =head;
    for (int i=1;i<pos-1 && temp != NULL;i++){
        temp=temp->next;
    }
    if(temp == NULL){
        printf("Invalid Position");
        return;
    }

    struct Node *newnode =(struct Node*)malloc(sizeof(struct Node));
    newnode->data=val;
   
    newnode->prev=temp;
    newnode->next=temp->next;

    if(temp->next !=NULL){
        temp->next->prev=newnode;
    }

    temp->next =newnode;


}

void deleteAtFirst(){

    if(head==NULL){
        printf("ll is empty");
        return;
    }

    struct Node *temp=head;
    // null10* *20 30 
    head=temp->next;
    head->prev=NULL;


    free(temp);




}
void deleteAtEnd(){
    if(head==NULL){
        printf("ll is empty");
        return;
    }

    struct Node *temp=head;

    
    
    //          t
        // null 10 null 
    while(temp->next !=NULL){
        temp=temp->next;
    }

    if (temp->prev!=NULL)
    {
    temp->prev->next = NULL;
    }
    

    
    free(temp);
    head = NULL;

}

void deleteAtPos(int pos){
       if(head==NULL){
        printf("ll is empty");
        return;
    }
    struct Node *temp =head;

                        // t
    // null 10* *20 *30* *40 null
    for (int i=1;i<pos && temp != NULL;i++){
        temp=temp->next;
    }


    if(temp->next != NULL){
        temp->next->prev = temp->prev; 
    }

    if(temp->prev !=NULL){
       temp->prev->next = temp->next;
    }

    free(temp);
}

void update(int pos, int val){

    struct Node *temp = head;
    if(temp==NULL){
        printf("List is Already Empty:");
        return ;
    }

    for(int i=1; i<pos; i++){
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


void create(int s){
    int val;

    for(int i=1;i<=s;i++){
        printf("Enter the Value: ");
        scanf("%d",&val);
        insertAtEnd(val);
    }
}

void display(){
    if(head==NULL){
        printf("Linked list Is Empty\n");
        return;
    }

    struct Node *temp=head;
    printf("NULL<->");
    while(temp !=NULL){
        printf(" %d <->",temp->data);
        temp = temp->next;
    }
    printf("NULL");

}
int main(){

    int choice;
    int s,val,pos;

    do {
        printf("\n1.Create \n2.InsertEnd \n3.InsertFirst \n4.InsertAtPos \n5. DisplayF\n6. DisplayB\n7. Delete At First\n8. Delete At End \n9.Delete At Pos. \n10 Update \n11. Search /n12. Exit\n");
        printf("Enter the Choice: ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("Enter the size of LL: ");
            scanf("%d",&s);
            create(s);
            break;

        case 2:
            printf("Enter the Value :");
            scanf("%d",&val);
            insertAtEnd(val);
            break;
        case 3:
            printf("Enter the value :");
            scanf("%d",&val);
            insertAtFirst(val);
            break;

        case 4:
            printf("Enter the pos to insert: ");
            scanf("%d",&pos);
            printf("Enter the value :");
            scanf("%d",&val);
            insertAtPos(pos,val);
            break;
        case 5:
            display();
            break;

        case 7:
            deleteAtFirst();
            break;

        case 8:
            deleteAtEnd();
            break;
        case 9:
            printf("Enter the pos to delete: ");
            scanf("%d",&pos);
            deleteAtPos(pos);
            break;

        case 10:
            printf("Enter the pos to Update: ");
            scanf("%d",&pos);
            printf("Enter the updated Value: ");
            scanf("%d",&val);
            update(pos,val);
            break;

        case 11:
            printf("Enter the Value to Search : ");
            scanf("%d",&val);
            search(val);
        default:
            break;
        }




    }while(1);


    return 0;
}