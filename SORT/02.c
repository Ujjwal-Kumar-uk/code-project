//INSERTION SORT
#include<stdio.h>
void insertionsort(int arr[],int n){
       for(int i = 1;i<n;i++){
        int key = arr[i];  // Element to be inserted
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void printarray(int arr[],int n){
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    printf("\n");
    }
}
int main(){
    int arr[] = {60,3,80,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("ORIGINAL ARRAY:\n");
    printarray(arr,n);
    insertionsort(arr,n);
    printf("SORTED ARRAy:\n");
    printarray(arr,n);
    return 0;
}