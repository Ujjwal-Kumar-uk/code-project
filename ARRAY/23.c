// DELETE DUPLICATE ELEMENT AND PRINT THE ARRAY
#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,4,5};
    int i,j,k;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;){
            if(arr[i]==arr[j]){
                for(k=j;k<n-1;k++){
                    arr[k] = arr[k+1];
                }
                n--;  //reduce the size of array
            }
            j++;
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}