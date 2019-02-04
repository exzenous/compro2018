#include <stdio.h>

int main()
{
	float shirt_price, percent;
	int num_buy;

	scanf("%f", &shirt_price);
	scanf("%f", &percent);
	scanf("%d", &num_buy);

	percent = (100-percent)/100;
	float final_price = (shirt_price*num_buy)*percent;

	printf("%.2f\n", final_price);
	
	return 0;
}