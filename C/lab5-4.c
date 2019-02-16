#include <stdio.h>

int main(){
    int num_n;
    scanf("%d", &num_n);

    if(num_n<=0){
        int i=1;
        while(i>=num_n){
            printf("%d ", i);
            i--;
        }
    }
    else{
        int i=1;
        while(i<=num_n){
            printf("%d ", i);
            i++;
        }
    }

    printf("\n");
    return 0;
}