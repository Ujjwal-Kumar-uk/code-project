
// CHECK TREE IS FULL OR NOT
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *create(int value){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->left = newnode->right = NULL;
    return newnode;
}
int isfull(struct node *root){
    if(root==NULL){
        return 1;
    }
    else if(root->left==NULL && root->right==NULL){
            return 1;
    }else if(root->left!=NULL && root->right!=NULL){
        return (isfull(root->left) && isfull(root->right));
    }else{
        return 0;
    }
}
int main(){
    struct node *root = create(10);
    root->left = create(30);
    root->right = create(20);
    root->left->left = create(50); 
    root->left->right = create(40);
    if(isfull(root)){
        printf("full\n");
    }else{
        printf("not full");
    } 
    return 0;
}