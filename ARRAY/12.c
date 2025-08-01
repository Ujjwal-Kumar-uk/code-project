//TO FIND SMALLEST OR LARGEST ELEMENT IN AN ARRAY?
#include<stdio.h>
int main(){
    int largest, smallest;
    int arr[5] = {2,6,8,9,10};
    largest = arr[0];
    smallest = arr[0];
    for(int i =0;i<5;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    printf("The largest number is: %d\n",largest);
    printf("The Smallest number is: %d\n",smallest);
    return 0;
}
