//QUEUE IMPLEMENTATION USING ARRAY
#include<stdio.h>
#define N 5
int arr[N];
int front = -1;
int rear = -1;
void enqueue(){
    int x;
    printf("enter the value to be inserted:\n");
    scanf("%d",&x);
    if(rear==N-1){
        printf("Queue if Full!");
    }else if(rear==-1 && front==-1){
        front = rear = 0;
        arr[rear]=x;
    }else{
        rear++;
        arr[rear] = x;
    }
     printf("%d enqued\n",x);
}
void dequeu(){
    if(rear==-1 && front==-1){
        printf("empty!");
    }else if(rear == front){
        printf("The removed element is %d\n", arr[front]);
        front = rear = -1;
    }else{
        printf("the removed element is %d\n",arr[front]);
        front++;
    }
}
void display(){
    int i;
    if(rear==-1 && front==-1){
        printf("empty!");
    }
    else{
        for(i=front;i<rear+1;i++){
            printf("%d ",arr[i]);
        }
    }
}
int main(){
    int n;
    while(1){
    printf("\nEnter your choice:\n");
    scanf("%d",&n);
    switch(n){
        case 1:
        enqueue();
        break;
        case 2:
        dequeu();
        break;
        case 3:
        display();
        break;
        case 4:
        return 0;
        break;
        case 5:
        printf("enter valid input");
        break;
    }
    }

}