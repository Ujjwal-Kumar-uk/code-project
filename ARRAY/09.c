//COUNT THE FREQUENCY OF EACH ELEMENT OF AN ARRAY
#include<stdio.h>
int main(){
    int size,count,i,j,a;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the %d elements:\n",size);
    for(i = 0;i<size;i++){
       scanf("%d",&arr[i]);
    }
    
    for(i = 0;i<size;i++){
        count = 1;
        a = 0;
        for(j=0;j<i;j++){
            if(arr[i]==arr[j]){
                a = 1;
                break;
            }
        }
    
        if(a) continue;
        for(j = i+1;j<size;j++){
           if(arr[i]==arr[j]){
                count ++;
            }
        }
        printf("FREQUENCY OF %d IS: %d\n", arr[i], count);    
    }
    return 0;
}
