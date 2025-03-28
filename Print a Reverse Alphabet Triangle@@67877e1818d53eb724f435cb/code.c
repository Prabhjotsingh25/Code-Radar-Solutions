#include <stdio.h>

int main() {
    int n;
    char ch;
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        ch='A';
        for (int j = i; j >=n; j--) {
            printf("%d ", ch);
        }
        printf("\n");
    }
    return 0;
}
