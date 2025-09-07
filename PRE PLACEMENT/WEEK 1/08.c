//Check if string is palindrome 
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);   

    i = 0;
    j = strlen(str) - 1;

    while(i < j) {
        if(str[i] != str[j]) {
            flag = 0;   
            break;
        }
        i++;
        j--;
    }

    if(flag)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}
