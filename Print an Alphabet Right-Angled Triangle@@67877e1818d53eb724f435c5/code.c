#include<stdio.h>

int main(){
    int n,i,j,val;
    val='A'+n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c ",val);
        }
        printf("\n");
    }
    return 0;
}