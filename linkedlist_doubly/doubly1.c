#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *prev;

    struct Node *next;

};

void display_forwar(struct Node *head){
    if(head==NULL){
        printf("List is Empty");
    }

    struct Node *temp =head;

    printf("NULL <->");
    while(temp!=NULL){
        printf("%d <-> ",temp->data);
        temp = temp->next;
    }
    printf("NULL ");
    printf("\n");
}

void display_backwar(struct Node *tail){
        struct Node *temp =tail;

        printf("NULL <->");

        while(temp!=NULL){
            printf("%d <-> ",temp->data);
            temp=temp->prev;
        }
        printf("NULL ");

}

void display_backward2(struct Node *head){
    struct Node *temp = head;

    while(temp->next !=NULL){
        temp=temp->next;
    }
                                                                                    // printf("%d",temp);

     printf("NULL <->");

    while(temp!=NULL){
        printf("%d <->",temp->data);
        temp= temp->prev;
    }
    printf("NULL");



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

    // printf("%d\n",n1.data);
    // printf("%d\n",n1.next->data);
    // printf("%d\n",n1.next->next->data);
    // printf("%d\n",n1.next->next->next->data);
    // printf("%d\n",n1.next->next->next->next);

    // display_forwar(&n1);
    // display_backwar(&n4);
    display_backward2(&n1);

    return 0;
}