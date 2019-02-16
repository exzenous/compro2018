#include <stdio.h>

int main(){
    int num_n;
    scanf("%d", &num_n);

    for (int i=num_n;i>=1;i--){
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}