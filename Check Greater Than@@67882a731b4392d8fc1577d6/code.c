#include <stdio.h>

int main() {
    int a,b,max;
    char c="True",d="False";
    scanf("%d %d",&a,&b);
    max = (a > b) ? c : d;
    printf("%s",max);
    return 0;
}