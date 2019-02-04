#include<stdio.h>

int main(){
	char text[4][31];
	for (int i = 0; i < 4; ++i)
	{
		scanf("%s", text[i]);
	}
	printf("String 1: %.3s\n", text[0]);
	printf("String 2: %.4s\n", text[1]);
	printf("String 3: %.5s\n", text[2]);
	printf("String 4: %.6s\n", text[3]);
	return 0;
}