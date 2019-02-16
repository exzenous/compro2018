#include <stdio.h>

int main(){
    char word_in[4];

    scanf("%s", word_in);

    printf("*****\n");
    printf("*-*-*\n");
    printf("*%s*\n", word_in);
    printf("*-*-*\n");
    printf("*****\n");

    return 0;
}