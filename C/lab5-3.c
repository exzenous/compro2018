#include <stdio.h>

int main(){
    int num_n;
    scanf("%d", &num_n);

    if(num_n<0){
        for(int i=num_n;i<=0;i++){
            printf("%d ", i);
        }
    }
    else{
        for(int i=num_n;i>=0;i--){
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}