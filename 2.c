#include<stdio.h>
int main()
{
	int M1,M2,M3,M4,M5,T;
	printf("enter marks: ");
	scanf("%d%d%d%d%d",&M1,&M2,&M3,&M4,&M5);
	T=M1+M2+M3+M4+M5;
	float P=T/5;
	printf("The total is :%d",T);
	printf("The percentage is : %f",P);
}
