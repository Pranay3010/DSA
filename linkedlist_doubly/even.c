#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *prev;

    struct Node *next;

};

void display_even(struct Node *head){
    if(head==NULL){
        printf("List is Empty");
    }

    struct Node *temp =head;

    printf("NULL <->");
    int pos=1;
    while(temp!=NULL){
        if(pos%2==0){
        printf("%d <-> ",temp->data);}
        temp = temp->next;
        pos+=1;
    }
    printf("NULL ");
    printf("\n");
}


int main(){
    struct Node n1,n2,n3,n4;

    n1.prev =NULL;
    n1.data =10;
    n1.next= &n2;

    n2.prev =&n1;
    n2.data =20;
    n2.next= &n3;

    n3.prev =&n2;
    n3.data =30;
    n3.next= &n4;

    n4.prev =&n3;
    n4.data =40;
    n4.next= NULL;

    display_even(&n1);

    return 0;
}