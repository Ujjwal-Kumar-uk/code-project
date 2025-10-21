// DOUBLY LINKED LIST DELETION
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;
struct node* createNode(int value) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->prev = NULL;
    newnode->next = NULL;
    return newnode;
}


void insertAtEnd() {
    int value;
    printf("Enter value to insert: ");
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
        newnode->prev = temp;
    }

    printf("%d inserted.\n", value);
}
void deleteFromBeginning() {
    if (head == NULL) {
        printf("List is empty.\n");
    } else {
        struct node *temp = head;
        head = head->next;
        if (head != NULL)
            head->prev = NULL;
        printf("%d deleted from beginning.\n", temp->data);
        free(temp);
    }
}
void deleteFromEnd() {
    if (head == NULL) {
        printf("List is empty.\n");
    } else if (head->next == NULL) {
        printf("%d deleted from end.\n", head->data);
        free(head);
        head = NULL;
    } else {
        struct node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        printf("%d deleted from end.\n", temp->data);
        temp->prev->next = NULL;
        free(temp);
    }
}
void deleteFromPosition() {
    int pos, i = 1;
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    struct node *temp = head;
    if (pos == 1) {
        deleteFromBeginning();
        return;
    }
    while (i < pos && temp != NULL) {
        temp = temp->next;
        i++;
    }
    if (temp == NULL) {
        printf("Position out of range.\n");
        return;
    }
    if (temp->next == NULL) {
        deleteFromEnd();
        return;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

    printf("%d deleted from position %d.\n", temp->data, pos);
    free(temp);
}
void display() {
    if (head == NULL) {
        printf("List is empty.\n");
    } else {
        struct node *temp = head;
        printf("Doubly Linked List: ");
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
int main() {
    int choice;
    printf("\n--- Doubly Linked List Deletion ---\n");
    printf("1. Insert at End\n");
    printf("2. Delete from Beginning\n");
    printf("3. Delete from End\n");
    printf("4. Delete from Position\n");
    printf("5. Display\n");
    printf("6. Exit\n");

    do {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertAtEnd();
                break;
            case 2:
                deleteFromBeginning();
                break;
            case 3:
                deleteFromEnd();
                break;
            case 4:
                deleteFromPosition();
                break;
            case 5:
                display();
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 6);

    return 0;
}
