//DECLARE,DISPLAY AND READ IN 2-D ARRAY
#include<stdio.h>
int main(){
    int rows,cols;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    printf("Enter the number of cols: ");
    scanf("%d",&cols);
    int arr[rows][cols];
    printf("Enter the elements in 2-d array:\n");
    for(int i = 0;i<rows;i++){
        for(int j = 0;j<cols;j++){
            printf("Elements at [%d][%d]: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The elements of the 2-d array are:\n");
    for(int i = 0;i<rows;i++){
        for(int j = 0;j<cols;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}