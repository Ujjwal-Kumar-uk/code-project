//TO FIND THE AVERAGE OF THE NUMBER
#include <stdio.h>
int main()
{
    int n, a;
    float average;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the %d element: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum = sum+arr[i];
    }
    average = sum/(float)n;
    printf("The average is: %0.2f",average);
    return 0;
}