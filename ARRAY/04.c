//SIZE OF AN ARRAY
#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("size of this array is %d\n",size);
    return 0;
}