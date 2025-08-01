//c program to print the second largest number from an array
#include<stdio.h>
int main(){
    int arr[] = {1,5,6,8,3};
    int i,max1,max2;
    if(arr[0]>arr[1]){
        max1 = arr[0];
        max2 = arr[1];
    }else{
        max1 = arr[1];
        max2 = arr[0];
    }
    for(i=2;i<5;i++){
        if(arr[i]>max1){
            max2 = max1;
            max1 = arr[i];
        }else if(arr[i]>max2){
            max2 = arr[i];
        }
    }
    printf("the second largest number is: %d",max2);
    return 0;
}