#include <stdio.h>

int main() {
    int a,b;
    b=~a;
    scanf("%d",&a);
    if(a%2==0){
        printf("Set");
    } else {
        printf("Not Set");
    }
    return 0;
}