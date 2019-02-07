#include <stdio.h>

int main(){
    float leg_a, leg_b, leg_c;

    scanf("%f%f%f", &leg_a, &leg_b, &leg_c);

    if (leg_a+leg_b>leg_c && leg_a+leg_c>leg_b && leg_b+leg_c>leg_a){
        printf("Triangle is valid.\n");
    }
    else{
        printf("Triangle is not valid.\n");
    }

    return 0;
}