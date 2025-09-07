// Check if matrix is sparse 
#include <stdio.h>

int main() {
    int m, n;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    int arr[100][100];
    int zeroCount = 0, total = m * n;

    printf("Enter matrix elements:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
            if(arr[i][j] == 0) {
                zeroCount++;
            }
        }
    }

    if(zeroCount > total / 2)
        printf("The matrix is a Sparse Matrix.\n");
    else
        printf("The matrix is NOT a Sparse Matrix.\n");

    return 0;
}
