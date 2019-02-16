#include <stdio.h>

int main(){
    int var_in;
    int denominator=1;
    int remains = 0;

    scanf("%d", &var_in);

    while(var_in!=0){
        remains += denominator%var_in;
        denominator = var_in;
        scanf("%d", &var_in);
    }

    printf("%d\n", remains);
    return 0;
}