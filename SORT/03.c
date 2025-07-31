//SELECTION SORT
void selectionsort(int arr[],int n){
    int temp,i,j;
    int minindx;
    for(i=0;i<n-1;i++){
        minindx = i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[minindx]){
                minindx=j;
            }
        }
    temp = arr[minindx];
    arr[minindx] = arr[i];
    arr[i] = temp;
        
    }
}
void printarray(int arr[],int n){
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}
int main(){
    int arr[] = {8,6,20,3,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("ORIGINAL ARRAY: ");
    printarray(arr,n);
    printf("SORTED ARRAY: ");
    selectionsort(arr,n);
    printarray(arr,n);
    return 0;
}