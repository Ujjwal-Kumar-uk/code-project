//Write a Program to check whether a string is palindrome or not. 
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, temp = 1;

    printf("Enter a string: ");
    scanf("%s", str); // Reads input (doesn't handle spaces)

    len = strlen(str); // Get the length of the string

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) { // Compare characters from both ends
            temp = 0; // Not a palindrome
            break;
        }
    }

    if (temp)
        printf("The string \"%s\" is a palindrome.\n", str);
    else
        printf("The string \"%s\" is NOT a palindrome.\n", str);

    return 0;
}
