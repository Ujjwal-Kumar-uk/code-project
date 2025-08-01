//TO DECLARE, READ AND DISPLAY VALUES IN 1-D ARRAY
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d elements\n",n);
    for(int i = 0;i<n;i++){
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The elements in the array are:\n");
    for(int i = 0;i<n;i++){
        printf("Element %d: %d\n",i+1,arr[i]);
    }
    return 0;
}