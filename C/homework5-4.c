#include <stdio.h>

int main(){
    int var_n;
    scanf("%d", &var_n);
    int i,j,k=var_n;
    int x,y=1;

    for(i=1;i<=var_n;i++){
        for(j=(k-1);j>=1;j--){
            printf(" ");
        }
        for(x=1;x<=y;x++){
            printf("*");
        }
        printf("\n");
        k--;
        y += 2;
    }

    return 0;
}