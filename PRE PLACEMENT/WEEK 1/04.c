//MOVE ALL ZEROES AT END
#include <stdio.h>
int main() {
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Push zeros to end (bubble method)
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-1; j++) {
            if(arr[j] == 0) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Array after moving zeros to end:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
