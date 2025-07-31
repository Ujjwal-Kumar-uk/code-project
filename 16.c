// Write a Program to perform linear search of 5 elements taken as user input.
#include <stdio.h>
int main()
{
    char str[5];
    char a;
    int i,found = 0;
    printf("Enter 5 characters:\n");
    for(i = 0;i<5;i++){
        scanf(" %c",&str[i]);   //notice the space before %c
    }

    printf("enter the character you want to search:\n");
    scanf(" %c",&a);
    for(i=0;i<5;i++){
        if(str[i]==a){
            printf("Character found at %d and it is: %c",i,a);
            found = 1;
            break;
        }
    }
    if(!found){
        printf("Character doesnot exist in the string");
    }
    return 0;
}
