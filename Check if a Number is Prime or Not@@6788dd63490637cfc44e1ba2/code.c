#include <stdio.h>

int main() {
    int a,b=1,i;
    scanf("%d",&a);
    if(a<=1){
        b=0;
    } else{
        for(i=2;i<=a/2;i++){
            if(a%i==0){
                b=0;
                break;
            }
        }
    }

    if(b==1){
        printf("Prime");
    } else{
        printf("Not Prime");
    }
    return 0;
}