//TAKING USER INPUT USING %S
#include<stdio.h>
int main(){
    int a;
    printf("ENTER THE SIZE: ");
    scanf("%d",&a);
    char str[a];
    printf("Enter the string: ");
    scanf("%s",str);
    printf("The string is: %s",str);
    return 0;
}