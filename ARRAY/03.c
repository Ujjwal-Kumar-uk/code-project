//REPLACE A VALUE
#include<stdio.h>
int main(){
    int arr[5] = {20,30,50,80,90};
    arr[2] = 40;
    for(int i = 0;i<5;i++){
    printf("The element of arr is %d\n",arr[i]);
    }
    return 0;
}