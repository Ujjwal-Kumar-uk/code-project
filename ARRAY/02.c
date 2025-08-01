//CREATE A 2-D ARRAY BY TAKING INPUT FROM THE USER. WRITE A DISPLAY FUNCTION TO PRINT THE CONTENT OF THIS 2-D ARRAY ON THE SCREEN.
#include<stdio.h>
int main(){
    int arr[3][2];
    for(int i = 0;i<3;i++){
        for(int j = 0;j<2;j++){
            printf("Enter the value of arr[%d][%d]\n",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0;i<3;i++){
        for(int j = 0;j<2;j++){
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}