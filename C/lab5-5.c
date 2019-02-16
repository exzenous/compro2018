#include <stdio.h>

int main(){

    int input_n;
    int loop_state = 1;
    while(loop_state!=0){
        scanf("%d", &input_n);
        if(input_n%2==0 && input_n>=2){
            //Is Even and More than 2
            int i;
            for(i=1; i<=(input_n/2);i++){
                printf("%d", i);
            }
            for(i=(input_n/2);i>=1;i--){
                printf("%d", i);
            }
            loop_state = 0;
        }
        else{
            //Is Odd
            printf("error\n");
        }
    }

    printf("\n");
    return 0;
}