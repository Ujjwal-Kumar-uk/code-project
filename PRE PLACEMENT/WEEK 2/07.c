//Multiply two polynomials
#include <stdio.h>

int main() {
    int n, m;

    printf("Enter degree of first polynomial: ");
    scanf("%d", &n);
    int poly1[n+1];
    printf("Enter coefficients of first polynomial (from constant to x^%d):\n", n);
    for(int i = 0; i <= n; i++) {
        scanf("%d", &poly1[i]);
    }

    printf("Enter degree of second polynomial: ");
    scanf("%d", &m);
    int poly2[m+1];
    printf("Enter coefficients of second polynomial (from constant to x^%d):\n", m);
    for(int i = 0; i <= m; i++) {
        scanf("%d", &poly2[i]);
    }

    int result[n+m+1];
    for(int i = 0; i <= n+m; i++) {
        result[i] = 0;
    }

    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= m; j++) {
            result[i+j] += poly1[i] * poly2[j];
        }
    }

    printf("Resultant polynomial: ");
    for(int i = n+m; i >= 0; i--) {
        if(result[i] != 0) {
            printf("%dx^%d ", result[i], i);
            if(i > 0) printf("+ ");
        }
    }
    printf("\n");

    return 0;
}
