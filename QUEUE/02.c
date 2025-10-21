//QUEUE USING LINKED LIST
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
struct node *newnode,*temp;
void enque(){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the value: ");
    scanf("%d",&newnode->data);
     newnode->next = NULL;
    if(rear==NULL){
        rear = front = newnode;
       
    }else{
        rear->next = newnode;
        rear = newnode;
    }
}
void deque(){
    if(front==NULL){
        printf("empty\n");
    }else{
        temp = front;
        front = front->next;
        if(front==NULL){
            rear=NULL;
        }
        printf("%d dequed",temp->data);
        free(temp);
    }
}
void display(){
    if(front==NULL){
        printf("empty\n");
    }else{
        temp=front;
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}
int main(){
    int n;
    do{
        printf("\nenter your choice: ");
        scanf("%d",&n);
        switch(n){
            case 1: enque();
            break;
            case 2:
            deque();
            break;
            case 3: display();
            break;
            case 4: printf("exit\n");
            break;
            defaule:
            printf("enter valid response\n");

        }
    }while(n!=4);
}