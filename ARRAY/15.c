//REVERSE AN ARRAY
#include<stdio.h>
int main(){
    int arr[6] = {1,2,4,6,5,3};
    int i,temp;
    for(i = 0;i<(6/2);i++){    //i<(n/2)  here n is size of array
        temp = arr[i];
        arr[i] = arr[6-1-i];
        arr[6-1-i] = temp;
    }
    printf("the reverse array is: ");
    for(i = 0;i<6;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}