//MERGE THE ARRAY
#include<stdio.h>
int main(){
    int n1,n2;
    printf("enter the size of first array: ");
    scanf("%d",&n1);
    int arr1[n1];
    printf("enter the size of second array: ");
    scanf("%d",&n2);
    int arr2[n2];
    printf("Enter the %d elements of array1 : ",n1);
    for(int i = 0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the %d elements of array2 : ",n2);
    for(int i = 0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    int msize = n1+n2;
    int merge[msize];
    for(int i = 0;i<n1;i++){
        merge[i]=arr1[i];
    }
    for(int i = 0;i<n2;i++){
        merge[n1 + i] = arr2[i];
    }
    printf("MERGED ARRAY: ");
    for(int i = 0;i<msize;i++){
        printf("%d ",merge[i]);
    }
    printf("\n");
    return 0;
}