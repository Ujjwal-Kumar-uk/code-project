// INSERT AT END AND AT BEGINNING
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node* createNode(int value) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}
void insertAtBeginning() {
    int value;
    printf("Enter value to insert at beginning: ");
    scanf("%d", &value);

    struct node *newnode = createNode(value);
    newnode->next = head;
    head = newnode;

    printf("%d inserted at beginning.\n", value);
}
void insertAtEnd() {
    int value;
    printf("Enter value to insert at end: ");
    scanf("%d", &value);

    struct node *newnode = createNode(value);

    if (head == NULL) {
        head = newnode; 
    } else {
        struct node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
    }

    printf("%d inserted at end.\n", value);
}
void display() {
    if (head == NULL) {
        printf("List is empty.\n");
    } else {
        struct node *temp = head;
        printf("Linked list elements: ");
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
int main() {
    int choice;
    printf("\n--- Linked List Operations ---\n");
    printf("1. Insert at Beginning\n");
    printf("2. Insert at End\n");
    printf("3. Display\n");
    printf("4. Exit\n");

    do {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertAtBeginning();
                break;
            case 2:
                insertAtEnd();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
