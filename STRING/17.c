//Write a Program to perform binary search of 5 elements taken as user input.
#include <stdio.h>

int main() {
    char arr[5];
    char key;
    int low = 0, high = 4, mid, found = 0, i;

    // Input 5 sorted characters
    printf("Enter 5 sorted characters (A-Z):\n");
    for (i = 0; i < 5; i++) {
        scanf(" %c", &arr[i]);
    }

    // Input character to search for
    printf("Enter character to search: ");
    scanf(" %c", &key);

    // Binary search
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            printf("Character '%c' found at index %d.\n", key, mid);
            found = 1;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("Character '%c' not found.\n", key);
    }

    return 0;
}
