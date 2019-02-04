#include <stdio.h>
#include <math.h>

int main()
{
	double a_leg, b_leg, c_leg;

	scanf("%lf", &a_leg);
	scanf("%lf", &b_leg);

	c_leg = sqrt((a_leg*a_leg)+(b_leg*b_leg));

	printf("%.2lf\n", c_leg);

	return 0;
}