#include <stdio.h>

int main(){
    int n_num;
    scanf("%d", &n_num);

    double input_value;
    double max_value;
    double min_value;
    double all_sum = 0;
    for(int i=1;i<=n_num;){
        scanf("%lf", &input_value);
        if(i==1){
            //Is First Round
            max_value = input_value;
            min_value = input_value;
        }
        else{
            // New Input Value
            if(input_value>=max_value){
                if(max_value<min_value){
                    min_value = max_value;
                }
                max_value = input_value;
            }
            else{
                if(input_value<=min_value){
                    min_value = input_value;
                }
            }
        }
        //Sum up all inputs
        all_sum += input_value;
        i++;
    }
    printf("%d Values\n", n_num);
    printf("Min: %.3lf\n", min_value);
    printf("Max: %.3lf\n", max_value);
    printf("Avg: %.2lf\n", all_sum/n_num);
}