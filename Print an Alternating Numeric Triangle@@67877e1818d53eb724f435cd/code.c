#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=i;j>0;j--){
            printf("%d ", j%2);
        }
        printf("\n");
    }
    return 0;
}