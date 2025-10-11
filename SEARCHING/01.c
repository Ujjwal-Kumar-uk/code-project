// LINEAR SEARCH
#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5};
    int s = sizeof(arr)/sizeof(arr[0]);
    int n,i,found=0;
    printf("enter the element you want to search: ");
    scanf("%d",&n);
    for(i=0;i<s;i++){
        if(arr[i]==n){
            printf("%d found at position %d",n,i+1);
            found = 1;
            break;
        }
    }
    if(found==0){
    printf("%d not found",n);
    }
    return 0;
}

