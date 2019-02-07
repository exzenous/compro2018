#include <stdio.h>

int main()
{
	int num_one, num_two;
	scanf("%d %d", &num_one, &num_two);
	if(num_one == num_two){
		printf("%d + %d = %d\n", num_one, num_two, num_one+num_two);
	}
	else{
		printf("%d - %d = %d\n", num_one, num_two, num_one-num_two);
	}
	return 0;
}