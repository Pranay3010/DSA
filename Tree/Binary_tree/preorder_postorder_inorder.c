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


void preorder(struct Node *root){

    if(root == NULL){
        return;
    }

    printf("%d->",root->data);

    preorder(root->left); 
    preorder(root->right);
    
}

void postorder(struct Node *root){

    if(root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);

    printf("%d->",root->data);

}

void inorder(struct Node *root){
    if(root == NULL){
        return;
    }

    inorder(root->left);

    printf("%d->",root->data);
    inorder(root->right);

    
}

int main(){

    struct Node *root = createNode(10);

    root->left = createNode(20);
    root->right =createNode(30);

    root->left->left= createNode(90);
    root->left->right= createNode(60);

    root->right->right=createNode(50);

    preorder(root);
    printf("\n");

    postorder(root);
    printf("\n");
    inorder(root);

    



    return 0;
}