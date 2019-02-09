#include <stdio.h>

int main(){

	float og_price;
	int percent,numbuy;

	scanf("%f", &og_price);
	scanf("%d", &percent);
	scanf("%d", &numbuy);

	float discount_promo_price = (og_price*numbuy)*(100-percent)/100;

	// Promo : Buy 2 Free 1 = Get 3
	int left_shirt = numbuy%3;
	int howmanytimes = numbuy/3;
	float buygetfree_promo = (og_price*2)*howmanytimes;

	if (left_shirt>0)
		buygetfree_promo += (left_shirt*og_price);

	if (discount_promo_price<=buygetfree_promo){
		printf("Discount %d%%\n", percent);
		printf("%.2f\n", discount_promo_price);
	}
	else{
		printf("Buy 2 Get 1\n");
		printf("%.2f\n", buygetfree_promo);
	}

	return 0;
}