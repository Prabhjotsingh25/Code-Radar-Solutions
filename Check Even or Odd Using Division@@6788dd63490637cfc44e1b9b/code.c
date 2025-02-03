#include <stdio.h>

int main() {
    int a;
    int b=2;
    scanf("%d",&a);
    if(a%b==0){
        printf("Even");
    } else(a%b!=0){
        printf("Odd");
    }
    return 0;
}