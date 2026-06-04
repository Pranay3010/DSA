#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *left;
    struct Node *right;

};

struct Node *createNode(int val){                // return a newnode when called
    struct Node *newnode =(struct Node *)malloc(sizeof(struct Node));
    newnode->data=val;
    newnode->left=NULL;
    newnode->right=NULL;

    return newnode;
}


int main(){

    struct Node *root = createNode(10);

    root->left = createNode(20);
    root->right =createNode(30);

    root->left->left= createNode(90);
    root->left->right= createNode(60);

    root->right->right=createNode(50);

    printf("%d",root->data);
    printf("\n%d",root->left->data);
    printf("\n%d",root->left->left->data);
    printf("\n%d",root->left->right->data);
    printf("\n%d",root->right->right->data);
    printf("\n%d",root->right->left);  // prints 0 for null root

    



    return 0;
}