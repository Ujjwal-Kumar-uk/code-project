// Write a Program to find the vowels in the given string
#include<stdio.h>
int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", str); // Reads input with spaces

    printf("Vowels in the given string: ");
    for (i = 0; str[i] != '\0'; i++) {
        // Check for vowels (both uppercase and lowercase)
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            printf("%c ", str[i]); // Print the vowel
        }
    }
    printf("\n");

    return 0;
}

