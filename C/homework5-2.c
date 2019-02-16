#include <stdio.h>

int main(){
    int num_input;
    scanf("%d", &num_input);
    int i = 1,j = 1;
    int reverse_dash = num_input;

    while(i<=num_input){
        while(j<=num_input){
            if(j==i || j==reverse_dash){
                printf("-");
            }
            else{
                printf("#");
            }
            j++;
        }

        printf("\n");

        reverse_dash--;  // Change Reverse Dash Position
        j=1; // Reset Column Position Na Ja
        i++; // Start New Line
    }
    return 0;
}