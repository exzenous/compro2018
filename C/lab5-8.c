#include <stdio.h>

int main(){
    int count_case1 = 0; // Age >= 20 and Height >= 160
    int count_case2 = 0; // Age < 20 and Height <= 180 or Weight >= 60
    int count_case3 = 0; // Age >= 30 and Weight >= 40 and Weight <= 80
    int count_case4 = 0; // Age < 40 and Weight < 85 or Height <= 200

    float all_sum_age = 0;
    float all_sum_height = 0;
    float all_sum_weight = 0;

    int input_age,input_height,input_weight;

    for(int i=1;i<=50;){
        scanf("%d %d %d", &input_age,&input_height,&input_weight);

        all_sum_age += input_age;
        all_sum_height += input_height;
        all_sum_weight += input_weight;

        if(input_age>=20 && input_height>=160){
            count_case1++;
        }
        if(input_age<20){
            if(input_height<=180 || input_weight>=60){
                count_case2++;
            }
        }
        if(input_age>=30){
            if(input_weight>=40 && input_weight<=80){
                count_case3++;
            }
        }
        if(input_age<40){
            if(input_weight<85 || input_height<=200){
                count_case4++;
            }
        }

        i++;
    }
    printf("Age >= 20 and Height >= 160: %d\n", count_case1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", count_case2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", count_case3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", count_case4);

    printf("Average Age: %d\n", (int) (all_sum_age/50));
    printf("Average Height: %.2f\n", all_sum_height/50);
    printf("Average Weight: %.2f\n", all_sum_weight/50);
}