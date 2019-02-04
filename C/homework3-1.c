#include <stdio.h>
#define pi 3.14159265359

int main()
{
	float price, radius, height;

	scanf("%f", &price);
	scanf("%f", &radius);radius /= 2;
	scanf("%f", &height);

	float volume = pi*(radius*radius)*height;

	printf("Volume : %.2fml\n", volume);
	printf("Baht/ml : %.4f\n", price/volume);

	return 0;
}