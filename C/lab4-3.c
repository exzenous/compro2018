#include <stdio.h>
#include <ctype.h>

int main(){
    char grade,grade_lett;
    scanf("%s", &grade);
    grade_lett = tolower(grade);

    switch(grade_lett){
        case 'a':
            printf("Genius\n");
            break;
        case 'b':
            printf("Good\n");
            break;
        case 'c':
            printf("Try Harder\n");
            break;
        case 'd':
            printf("Very Bad\n");
            break;
        case 'f':
            printf("Fail\n");
            break;
        default:
            printf("Invalid Input\n");
            break;
    }

    return 0;
}