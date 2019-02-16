#include <stdio.h>

int main(){
    int loop_control = 1;
    int input_num;
    int all_sum = 0;
    while(loop_control!=0){
        scanf("%d", &input_num);
        if(input_num != -9){
            all_sum += input_num;
        }
        else{
            loop_control = 0;
        }
    }
    printf("%d\n", all_sum);
}