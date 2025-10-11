//INTERPOLATION SEARCH
#include <stdio.h>

// Function to perform interpolation search
int interpolationSearch(int arr[], int n, int key) {
    int low = 0;
    int high = n - 1;

    while (low <= high && key >= arr[low] && key <= arr[high]) {
        // Estimate the position of the key
        int pos = low + ((double)(high - low) / (arr[high] - arr[low])) * (key - arr[low]);

        if (arr[pos] == key)
            return pos;  // Found the key
        else if (arr[pos] < key)
            low = pos + 1;  // Search right half
        else
            high = pos - 1; // Search left half
    }

    return -1; // Key not found
}

int main() {
    int arr[] = {5, 10, 15, 20, 25, 30, 35, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter element to search: ");
    scanf("%d", &key);

    int result = interpolationSearch(arr, n, key);

    if (result != -1)
        printf("Element %d found at index %d\n", key, result);
    else
        printf("Element %d not found in the array\n", key);

    return 0;
}


