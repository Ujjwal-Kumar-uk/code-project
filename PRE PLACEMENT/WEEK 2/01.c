// Print matrix in spiral form
#include <stdio.h>

int main() {
    int m, n;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    int arr[100][100];
    printf("Enter matrix elements:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;

    printf("Spiral order: ");

    while(top <= bottom && left <= right) {

        for(int i = left; i <= right; i++) {
            printf("%d ", arr[top][i]);
        }
        top++;

        
        for(int i = top; i <= bottom; i++) {
            printf("%d ", arr[i][right]);
        }
        right--;

        
        if(top <= bottom) {
            for(int i = right; i >= left; i--) {
                printf("%d ", arr[bottom][i]);
            }
            bottom--;
        }

        
        if(left <= right) {
            for(int i = bottom; i >= top; i--) {
                printf("%d ", arr[i][left]);
            }
            left++;
        }
    }

    return 0;
}
