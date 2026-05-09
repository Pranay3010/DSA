#include<stdio.h>

struct Node{
    int data;
    struct Node *next;
};

void display( struct Node *head){
    struct Node *temp = head;

    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    // printf("NULL");
}

int main(){
    struct Node n1,n2,n3,n4,n5;
    n1.data =10;
    n1.next =&n2;

    n2.data=20;
    n2.next=&n3;

    n3.data=30;
    n3.next=&n4;
    
    n4.data=40;
    n4.next=&n5;
    
    n5.data=50;
    n5.next=NULL;


    // printf("%d->",n1.data);
    // printf("%d->",n1.next->data);
    // printf("%d->",n1.next->next->data);
    // printf("%d->",n1.next->next->next->data);
    // printf("%d->",n1.next->next->next->next->data);
    // printf("%d",n1.next->next->next->next->next->data);

    display(&n1);

    return 0;
}