#include <stdio.h>
#include <ctype.h>

int main(){
    char coffee_in;
    scanf("%c", &coffee_in);

    if (isdigit(coffee_in)){
        printf("number\n");
    }
    else if (islower(coffee_in)){
        printf("lowercase\n");
    }
    else if (isupper(coffee_in)){
        printf("uppercase\n");
    }
    else{
        printf("error\n");
    }
    return 0;
}