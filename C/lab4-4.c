#include <stdio.h>

int main(){
    float score;
    char grade;
    scanf("%f", &score);

    if (score >= 0 && score <=100){
        if (score>=80){
            grade = 'A';
        }
        else if (score>=70){
            grade = 'B';
        }
        else if (score>=60){
            grade = 'C';
        }
        else if (score>=50){
            grade = 'D';
        }
        else{
            grade = 'F';
        }
        printf("%c\n", grade);
    }
    else{
        printf("Out of Range\n");
    }

    return 0;
}