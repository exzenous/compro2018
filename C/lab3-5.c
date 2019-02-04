#include <stdio.h>

int main()
{
	double num_a, num_b;

	scanf("%lf,%lf", &num_a, &num_b);

	printf("The sum of the given numbers : %lf\n", num_a+num_b);
	printf("The difference of the given numbers : %lf\n", num_a-num_b);
	printf("The product of the given numbers : %lf\n", num_a*num_b);
	printf("The quotient of the given numbers : %lf\n", num_a/num_b);

	return 0;
}