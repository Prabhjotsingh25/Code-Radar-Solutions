#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c;
    scanf("%d %d",&a,&b);
    c=pow(b,2);
    if(c==a){
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}