#include<stdio.h>

int main(){
	char num_a[5];
	
	scanf("%s", num_a);

	printf("%-81.1s%-81.2s%-81.3s%-81.4s%.5s", num_a, num_a, num_a, num_a, num_a);

	return 0;
}