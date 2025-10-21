// CIRCULAR QUEUE
#include<stdio.h>
#define N 5
int que[N];
int front = -1;
int rear = -1;
void enque(){
    int x;
    printf("enter the data: ");
    scanf("%d",&x);
    if((rear+1) % N==front){
        printf("Full\n");
    }else if(front==-1){
        front=rear=0;
    }else{
        rear = (rear+1)%N;      
    }
      que[rear] = x;
    printf("%d enqued",x);
}
void deque(){
    if(front==-1){
        printf("empty\n");
        return;
    }
    printf("The removed element is %d\n", que[front]);
    if(front==rear){
        front=rear=-1;
    }
    else{
        front = (front+1)%N;
    }
}

void display() {
    if (front == -1) {
        printf("Queue is Empty!\n");
        return;
    }

    printf("Queue elements: ");
    int i = front;
    while (1) {
        printf("%d ", que[i]);
        if (i == rear)
            break;
        i = (i + 1) % N;
    }
    printf("\n");
}

// Main function
int main() {
    int choice;

    while (1) {
        printf("\nMenu:\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Enter a valid input!\n");
        }
    }
}