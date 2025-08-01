//IN DESCENDING ORDER
#include<stdio.h>
int main(){
    int arr[6] = {2,5,6,3,4,1};
    int i,j,a;
    for(int i = 0;i<5;i++){
        for(j = i+1;j<6;j++){
              if(arr[i]<arr[j]){
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
              }
        }
    }
    printf("The descending order : ");
    for(i = 0;i<6;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}