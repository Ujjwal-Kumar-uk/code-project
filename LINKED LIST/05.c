//DOUBLY LINKED LIST NODE CREATION
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL, *temp, *newnode;
void create()
{
    int choice = 1;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d", &newnode->data);
        newnode->prev = NULL;
        newnode->next = NULL;
        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
        }       
        temp->next = newnode;
        newnode->prev = temp;                                          
        temp = newnode;                                          
    printf("do you want to continue(0,1): ");                                          
    scanf("%d",&choice);                                          
    }                                          
}                                          
void display()                                          
{                                          
    temp = head;                                          
    if (head == NULL)                                          
    {                                          
        printf("list is empty\n");                                          
        return;                                          
    }                                          
    else                                          
    {                                          
        while (temp != NULL)                                          
        {                                          
            printf("%d ", temp->data);                                          
            temp = temp->next;                                          
        }                                          
        printf("\n");                                          
    }                                          
}                                          
int main(){                                          
    create();                                          
    display();                                          
    return 0;                                          
}                                          
