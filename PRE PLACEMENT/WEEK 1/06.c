//Check if array is sorted 
#include <stdio.h>

int main() {
    int arr[100], n, i, sorted = 1;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n-1; i++) {
        if(arr[i] > arr[i+1]) {
            sorted = 0;  
            break;
        }
    }

    if(sorted)
        printf("Array is sorted in ascending order.\n");
    else
        printf("Array is NOT sorted.\n");

    return 0;
}
