//TAKING STRING INPUT FROM USER USING %C
#include<stdio.h>
int main(){
    char str[6];
    printf("Enter the string: ");
    for(int i = 0;i<5;i++){
        scanf("%c",&str[i]);
        fflush(stdin);
    }
    str[5] = '\0';
    printf("the string: \n");
    for(int i = 0;i<5;i++){
    printf("%c",str[i]);
    }
    return 0;
}