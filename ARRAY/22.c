//rotate an array k times
#include <stdio.h>

int main() {
    int n, k;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of times to rotate (k): ");
    scanf("%d", &k);

    k = k % n; // Handle k > n

    // Rotate left k times
    for (int r = 0; r < k; r++) {
        int temp = arr[0]; // store the first element
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1]; // shift elements left
        }
        arr[n - 1] = temp; // put first element at the end
    }

    // Print the rotated array
    printf("Array after rotating %d times:\n", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
