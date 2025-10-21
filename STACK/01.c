#include <stdio.h>
#define N 5
int st[N];
int top = -1;
void push()
{
    int x;
    printf("Enter value to be inserted: ");
    scanf("%d", &x);
    if (top == N-1)
    {
        printf("overflow");
    }
    else
    {
        top++;
        st[top] = x;
        printf("%d stored\n", x);
    }
}
void pop()
{
    int item;
    if (top == -1)
    {
        printf("underflow\n");
    }
    else
    {
        item = st[top];
        top--;
        printf("%d popped\n", item);
    }
}
void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", st[i]);
        }
        printf("\n");
    }
}
int main()
{
    int n;
    while (1)
    {
        printf("enter the choice:\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        default:
            printf("invalid choice");
        }
    }
}