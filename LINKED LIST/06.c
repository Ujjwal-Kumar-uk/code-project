//DOUBLY LINKED LIST INSERTION
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL, *newnode, *temp;
void insertatbeg()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data: ");
    scanf("%d", &newnode->data);
    newnode->prev = NULL;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;

    }
    else
    {
        newnode->next = head;
        head->prev = newnode;
        head  = newnode;
    }
}
void insertatend()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data: ");
    scanf("%d", &newnode->data);
    newnode->prev = NULL;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
    }
}
void insertatanypos(){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter the data: ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    newnode->prev = NULL;
    int pos;
    if(head == NULL){
        head = newnode;
    }else{
        printf("enter the position: ");
        scanf("%d",&pos);
        if(pos==1){
            insertatbeg();
        }else{
            temp = head;
            for(int i = 1;i<pos-1;i++){
                temp = temp->next;
            }
            newnode->next = temp->next;
            newnode->prev = temp;
            temp->next = newnode;
            temp->next->prev = newnode;
        }
    }
}
void display()
{
    if (head == NULL)
    {
        printf("empty");
    }
    else
    {
        temp = head;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}
int main()
{
    int n;
    do
    {
        printf("\nEnter your choice: ");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            insertatbeg();
            break;
        case 2:
            insertatend();
            break;
        case 3:
            printf("Exiting...\n");
            break;
        case 4:
            insertatanypos();
            break;
        case 5:
            display();
            break;
        default:
            printf("Enter valid response\n");
        }
    } while (n != 3);

    return 0;
}
