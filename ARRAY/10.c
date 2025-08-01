//COPY THE ELEMENTS OF ONE ARRAY TO ANOTHER
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    printf("Enter %d elements of arr1 is:\n ",n);
    for(int i = 0;i<n;i++){
        printf("Element %d is: ",i+1);
        scanf("%d",&arr1[i]);
    }
    for(int i = 0;i<n;i++){
        arr2[i] = arr1[i]; 
    }
    printf("\nThe elements in the first array are:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: %d\n", i + 1, arr1[i]);
    }
    printf("\nThe elements in the second array (copied) are:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: %d\n", i + 1, arr2[i]);
    }

    return 0;
}