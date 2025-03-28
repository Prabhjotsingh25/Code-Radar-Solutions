#include <stdio.h>

int main() {
    int n, i, j;
    char ch;
    
    scanf("%d", &n); // Take input for number of rows

    for(i = 1; i <= n; i++) {
        ch = 'A'; // Start with 'A' for each row
        for(j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++; // Move to next character
        }
        printf("\n");
    }
    return 0;
}
