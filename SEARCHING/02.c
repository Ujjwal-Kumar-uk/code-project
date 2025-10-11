
// BINARY SEARCH
#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int l=0,r=n-1,mid,found = 0;
    int data;
    printf("enter the data to be searched: ");
    scanf("%d",&data);
    while(l<=r){
        mid = (l+r)/2;
        if(arr[mid]==data){
            printf("%d found at index: %d",data,mid);
            found = 1;
            break;
        }else if(arr[mid]<data){
            l = mid+1;
        }else{
            r = mid-1;
        }
    }
    if(found==0){
        printf("%d not found",data);
    }
    return 0;
}