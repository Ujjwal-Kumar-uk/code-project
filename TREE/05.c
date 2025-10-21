#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
void mirror(struct node* root) {
    if (root == NULL)
        return;
    mirror(root->left);
    mirror(root->right);

    struct node* temp = root->left;
    root->left = root->right;
    root->right = temp;
}

void inorder(struct node* root) {
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

int main() {
    struct node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("Inorder traversal of original tree: ");
    inorder(root);
    mirror(root);

    printf("\nInorder traversal of mirror image: ");
    inorder(root);

    printf("\n");
    return 0;
}
