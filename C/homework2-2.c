#include<stdio.h>

int main(){
	char num[5];

	scanf("%s", num);

	printf("%c", num[2]);
	printf("%c", num[3]);
	printf("%c", num[4]);
	printf("%c", num[0]);
	printf("%c\n", num[1]);

	return 0;
}