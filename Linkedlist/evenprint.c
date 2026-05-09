#include<stdio.h>

struct Node{
    int data;
    struct Node *next;
};

void displayEven( struct Node *head){
    struct Node *temp = head;

    while(temp!=NULL){
        if(temp->data%2==0){
        printf("%d->",temp->data);
        }
        temp=temp->next;
    }
    // printf("NULL");
}
int main(){
    struct Node n1,n2,n3,n4,n5;
    n1.data =10;
    n1.next =&n2;

    n2.data=21;
    n2.next=&n3;

    n3.data=30;
    n3.next=&n4;
    
    n4.data=41;
    n4.next=&n5;
    
    n5.data=50;
    n5.next=NULL;

    displayEven(&n1);

    return 0;

}