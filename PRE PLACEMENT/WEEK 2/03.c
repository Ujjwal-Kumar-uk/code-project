// Sum of diagonals 
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int arr[100][100];
    printf("Enter matrix elements:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int sumPrimary = 0, sumSecondary = 0;

    for(int i = 0; i < n; i++) {
        sumPrimary += arr[i][i];              
        sumSecondary += arr[i][n - i - 1];    
    }

    printf("Sum of primary diagonal = %d\n", sumPrimary);
    printf("Sum of secondary diagonal = %d\n", sumSecondary);

    return 0;
}
