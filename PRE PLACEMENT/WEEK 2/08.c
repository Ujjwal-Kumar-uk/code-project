//Dynamic array operations
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, choice, pos, value, i;

    printf("Enter initial size of array: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    while(1) {
        printf("\nMenu:\n");
        printf("1. Insert\n2. Delete\n3. Search\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: 
                printf("Enter position (0-%d): ", n);
                scanf("%d", &pos);
                printf("Enter value: ");
                scanf("%d", &value);

                arr = (int*)realloc(arr, (n+1) * sizeof(int));
                for(i = n; i > pos; i--) {
                    arr[i] = arr[i-1];
                }
                arr[pos] = value;
                n++;
                break;

            case 2: 
                printf("Enter position (0-%d): ", n-1);
                scanf("%d", &pos);
                if(pos < 0 || pos >= n) {
                    printf("Invalid position!\n");
                } else {
                    for(i = pos; i < n-1; i++) {
                        arr[i] = arr[i+1];
                    }
                    n--;
                    arr = (int*)realloc(arr, n * sizeof(int));
                }
                break;

            case 3: 
                printf("Enter value to search: ");
                scanf("%d", &value);
                for(i = 0; i < n; i++) {
                    if(arr[i] == value) {
                        printf("Element found at index %d\n", i);
                        break;
                    }
                }
                if(i == n) {
                    printf("Element not found\n");
                }
                break;

            case 4: 
                printf("Array elements: ");
                for(i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 5: 
                free(arr);
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
