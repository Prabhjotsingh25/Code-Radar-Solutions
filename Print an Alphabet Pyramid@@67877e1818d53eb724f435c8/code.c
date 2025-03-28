#include <stdio.h>

int main() {
    int n, i, j;
    char ch;
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        ch='A'
        for(j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for(j = 1; j<= i;j++){
            printf("%c ",ch);
        }
        printf("\n");
    }
    return 0;
}
