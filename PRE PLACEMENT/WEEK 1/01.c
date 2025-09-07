//Insert an element at end of array
#include <stdio.h>

int main() {
    int arr[100];   
    int n, i, element;    
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to insert at end: ");
    scanf("%d", &element);
    arr[n] = element;
    n++;      
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
