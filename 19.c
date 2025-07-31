//write a c program to print the frequency of each vowel in string
#include <stdio.h>
#include <ctype.h> // for tolower()

int main() {
    char str[100];
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count vowels
    for (int j = 0; str[j] != '\0'; j++) {
        char ch = tolower(str[j]); // Convert to lowercase
        switch (ch) {
            case 'a': a++; break;
            case 'e': e++; break;
            case 'i': i++; break;
            case 'o': o++; break;
            case 'u': u++; break;
        }
    }

    // Output frequency of each vowel
    printf("Frequency of vowels:\n");
    printf("a: %d\n", a);
    printf("e: %d\n", e);
    printf("i: %d\n", i);
    printf("o: %d\n", o);
    printf("u: %d\n", u);

    return 0;
}
