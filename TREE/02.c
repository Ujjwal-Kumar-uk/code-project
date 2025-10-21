//insertion and deletion in binary search tree
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *create(int value){
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->left = NULL; 
    newnode->right = NULL;
    return newnode; 
}
struct node *insert(struct node *root,int value){
    if(root==NULL){
        root = create(value);
    }else{
        if(value<root->data){
            root->left = insert(root->left,value);
        }else if(value>root->data){
            root->right = insert(root->right,value);
        }
    }
    return root;
}
void inorder(struct node *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
struct node *findmin(struct node *root){
    while(root->left!=NULL){
        root = root->left;
    }
    return root;
}
struct node *delete(struct node *root,int key){
    if(root==NULL){
        return root;
    }else{
        if(key<root->data){
            root->left = delete(root->left,key);
        }else if(key>root->data){
            root->right = delete(root->right,key);
        }
        else{                           
            struct node *temp;      //deleting node with single child
            if(root->left==NULL){
                temp = root->right;
                free(root);
                return temp;
            }else if(root->right==NULL){
                temp = root->left;
                free(root);
                return temp;
            }
            temp = findmin(root->right);        // deleting node with 2 child
            root->data = temp->data;
            root->right = delete(root->right,temp->data);
        }
        return root;
    }
}
int main(){
    struct node *root=NULL;
    root = insert(root,90);
    insert(root,50);
    insert(root,70);
    insert(root,20);
    insert(root,30);
    printf("inorder: ");
    inorder(root);
    printf("\n");
    root = delete(root,20);
    printf("after deleting: ");
    inorder(root);
    return 0;
}
