#include <stdio.h>

int main()
{
	double width, length;

	scanf("%lf", &width);
	scanf("%lf", &length);

	printf("Perimeter of rectangle = %.4lf units\n", (width*2)+(length*2));

	return 0;
}