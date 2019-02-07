#include <stdio.h>
#include <ctype.h>

int main(){
    char tea_in;
    scanf("%c", &tea_in);

    if (tea_in >= 65 && tea_in <=90){
        //is uppercase
        printf("%c\n", (char)((int)tea_in + 32));
    }
    else if (tea_in >= 97 && tea_in <= 122){
        //is lowercase
        printf("%c\n", (char)((int)tea_in - 32));
    }
    else{
        printf("error\n");
    }

    return 0;
}