#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *left;
    struct Node *right;

};

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

struct Node *search(struct Node *root, int key){

    if(root==NULL){
        printf("Element Not Found\n");
        return 0;
    }

    if(root->data == key){
        printf("Element Found %d\n",root->data);
        return root;
    }

    if (key<root->data)
    {
        root->left = search(root->left,key);
    }
    else if(key>root->data)
    {
        root->right = search(root->right, key);
    }
    
}

struct Node *delete(struct Node *root, int key){

    if(root == NULL){
        return root;
    }

    
    if (key<root->data)
    {
        root->left = delete(root->left,key);
    }
    else if(key>root->data)
    {
        root->right = delete(root->right, key);
    }
    else{

    if(root==NULL){
        printf("Tree is Empty\n");
        return root;
    }

    if(key == root->data){
        free(root);
        return NULL;
    }

    if(root->left==NULL){
        struct Node *temp =root->right;
        free(root);
        return temp;
    }else if(root->right==NULL){
        struct Node *temp =root->left;
        free(root);
        return temp;
    }
    }

    return root;

}

struct Node *findmin(struct Node *root){

    if(root==NULL){
        printf("Tree is Empty\n");
        return NULL;
    }
    while (root->left != NULL)
     {
        root=root->left;
     }
    return root;
     
}
struct Node *findmax(struct Node *root){

    if(root==NULL){
        printf("Tree is Empty\n");
        return NULL;
    }
    while (root->right != NULL)
     {
        root=root->right;
     }
    return root;
     
}
struct Node *findSecondmin(struct Node *root){

    if(root==NULL){
        printf("Tree is Empty\n");
        return NULL;
    }
    while (root->left->left != NULL)
     {
        root=root->left;
     }
    return root;
     
}
struct Node *findSecondmax(struct Node *root){

    if(root==NULL){
        printf("Tree is Empty\n");
        return NULL;
    }
    while (root->right->right != NULL)
     {
        root=root->right;
     }
    return root;
     
}

struct Node *createNode(int val){                // return a newnode when called
    struct Node *newnode =(struct Node *)malloc(sizeof(struct Node));
    newnode->data=val;
    newnode->left=NULL;
    newnode->right=NULL;

    return newnode;
}

struct Node *insert(struct Node *root, int val){
    if(root==NULL){
        return createNode(val);
    }

    if (val < root->data)
    {
        root->left = insert(root->left,val);
    }
    else if (val > root->data)
    {
        root->right= insert(root->right,val);
    }
    
    return root;
}

int main(){

    int ch,val;
    int key;
    struct Node *root =NULL;
    struct Node *min =NULL;
    struct Node *max =NULL;
    struct Node *secondMin =NULL;
    struct Node *secondMax =NULL;


    do{
        printf("===Binary Search Tree Menu===\n");
        printf("1. Insert\n");
        printf("2. Preorder\n");
        printf("3. Postorder\n");
        printf("4. Inorder\n");
        printf("5. MIN\n");
        printf("6. MAX\n");
        printf("7. Search\n");
        printf("8. Delete\n");
        printf("9. Second Min\n");
        printf("10. Second Max \n");
        printf("11. Exit\n");

        printf("Enter the Choice:");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            printf("Enter the Value To Insert:");
            scanf("%d",&val);
            root = insert(root,val);
            break;
        case 2:
            preorder(root);
            break;
        case 3:
            postorder(root);

            break;
        case 4:
            inorder(root);
            break;
        case 5:
            min =findmin(root);
            printf("Min element is :%d\n",min->data);
            break;
        case 6:
            max = findmax(root);
            printf("Max Element is :%d\n",max->data);
            break;
        case 7:
            printf("Enter the key for search: ");
            scanf("%d",&key);
            search(root,key);
            break;
        case 8:
            printf("Enter the key for Delete: ");
            scanf("%d",&key);
            printf("Deleted %d\n",delete(root,key)) ;

            break;
        
        case 9:
            secondMin =findSecondmin(root);
            printf("Second Min element is :%d\n",secondMin->data);
            break;
        
        case 10:
            secondMax =findSecondmax(root);
            printf("Second Min element is :%d\n",secondMax->data);
            break;
        case 11:
            exit(0);
            break;
        
        default:
            printf("Invalid Choice");
            break;
        }

    }while(1);
}