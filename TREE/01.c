// BINARY SEARCH TREE
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
        return create(value);
    }
    if(value<root->data){
        root->left = insert(root->left,value);
    }else if(value>root->data){
        root->right = insert(root->right,value);
    }
    return root;
}
void inorder(struct node *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
int main()
{
    struct node *root=NULL;
    int i, x, val;
    printf("how many data you want:\n");
    scanf("%d", &x);
    printf("give the data:\n");
    for (i = 0; i < x; i++)
    {
        scanf("%d", &val);
        root = insert(root, val);
    }
    printf("inorder:\n");
    inorder(root);
    return 0;
}