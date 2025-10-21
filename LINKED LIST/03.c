//DELETE FROM BEGGINNING AND FROM END IN SINGLY LINKED LIST
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL,*temp,*newnode;
void insert(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data: ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }
    else{
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void deleteatend(){
    struct node *prev;
    prev=0;
    temp=head;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
}
void deleteatbeg(){
    temp=head;
    head=head->next;
    free(temp);
}
void display(){
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
int main(){
    int n;
    do{
        printf("\nenter your choice: ");
        scanf("%d",&n);
        switch(n){
            case 1:
            insert();
            break;
            case 2:
            deleteatend();
            break;
            case 3:
            deleteatbeg();
            break;
            case 4:
            display();
            break;
            case 5:
            printf("exiting");
            break;
            default:
            printf("enter valid option");
        }
    }while(n!=5);
    return 0;
}