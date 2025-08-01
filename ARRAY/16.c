// TO FIND THE LOCATION OF THE NUMBER GIVEN BY THE USER IN AN ARRAY
#include <stdio.h>
int main()
{
    int n, a;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the %d element: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element whose locaion you want to know: ");
    scanf("%d", &a);
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == a)
        {
            printf("Location of %d is: %d", a, i);
            found = 1;
        }
    }
    if (!found)
    {
        printf("element not found");
    }
    printf("\n");
    return 0;
}