#include <stdio.h>

int main()
{
	int time_in_sec;

	scanf("%d", &time_in_sec);

	int result_sec = time_in_sec%60; //Got Real Second

	int time_in_min = time_in_sec/60; //Got Min in Big

	int result_min = time_in_min%60;  //Got Real Min

	int time_in_hr = time_in_min/60;  // Got Hr in Big

	int result_hr = time_in_hr%24;  //Got Real Hr

	int time_in_day = time_in_hr/24;
	
	printf("%d s = %d d %d h %d m %d s\n", time_in_sec,time_in_day,result_hr,result_min,result_sec);
	



	return 0;
}