#include <stdio.h>

int main(){
    int var_m, var_n;
    scanf("%d %d", &var_m, &var_n);

    if(var_m>=var_n){
        while(var_m>=var_n){
            printf("%d ", var_m);
            var_m--;
        }
    }
    else{
        while(var_m<=var_n){
            printf("%d ", var_m);
            var_m++;
        }
    }
    printf("\n");
    return 0;
}