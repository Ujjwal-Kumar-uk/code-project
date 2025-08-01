//TO PRINT ALL THE ELEMENTS IN REVERSE ORDER
#include<stdio.h>
int main(){
    int arr[5] = {30,50,42,64,85};
    int i;
    for(i = 0;i<5;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i = 4;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}