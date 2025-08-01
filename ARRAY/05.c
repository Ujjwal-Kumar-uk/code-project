//ADD ALL ELEMENTS 
#include<stdio.h>
int main(){
    int i;
    int arr[10];
    int sum = 0;
    printf("Enter the element of array: ");
    for(i = 0;i<=9;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=9;i++){
        sum = sum+arr[i];
    }
    printf("Sum of an array is: %d",sum);
    return 0;
}