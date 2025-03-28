#include <stdio.h>

int main() {
    int n;
    char ch;
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        ch='A';
        for (int j = n; j >=1; j--) {
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}
