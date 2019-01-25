#include<stdio.h>

int main(){
	char firstn[31], lastn[31];
	int date, month, year, stid;
	float grade;
	scanf("%s", firstn);
	scanf("%s", lastn);
	scanf("%d", &stid);
	scanf("%d/%d/%d", &date, &month, &year);
	scanf("%f", &grade);

	printf("Fullname: %s %s\n", firstn, lastn);
	printf("ID: %d\n", stid);
	printf("DOB: %02d-%02d-%04d\n", date, month, year);
	printf("GPA: %.2f\n", grade);
	return 0;
}