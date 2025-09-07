//Add two polynomials
#include <stdio.h>

int main() {
    int n, m, max;
    
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

    max = (n > m) ? n : m;
    int result[max+1];

    for(int i = 0; i <= max; i++) {
        result[i] = 0;
    }

    for(int i = 0; i <= n; i++) {
        result[i] += poly1[i];
    }
    for(int i = 0; i <= m; i++) {
        result[i] += poly2[i];
    }

    printf("Resultant polynomial: ");
    for(int i = max; i >= 0; i--) {
        if(result[i] != 0) {
            printf("%dx^%d ", result[i], i);
            if(i > 0) printf("+ ");
        }
    }
    printf("\n");

    return 0;
}
