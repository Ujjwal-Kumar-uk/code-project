//CONSIDER 2 MATRIX AND PERFORM ADDITION AND MULTIPLICATION
#include<stdio.h>
int main(){
    int arr1[3][3] = {{1,2,3},
                      {4,5,6},
                      {7,8,9}};
    int arr2[3][3] = {{5,6,8},
                      {9,3,1},
                      {2,4,7}};
    int add[3][3],mul[3][3];
    printf("Matrix Addition result: \n");
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            add[i][j] = arr1[i][j]+arr2[i][j];
            printf("%d ",add[i][j]);
        }
    printf("\n");
    }
    printf("Matrix multiplication is: \n");
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            mul[i][j] = 0;
            for(int k = 0;k<i;k++){
                mul[i][j]+=arr1[i][k]*arr2[k][j];
            }
        printf("%d ",mul[i][j]);
        }
    printf("\n");
    }
    return 0;
}