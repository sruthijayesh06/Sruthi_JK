#include<stdio.h>
int main()
{
	int B,A,I,G;
	printf("enter basic salary:");
	scanf("%d",&B);
	printf("enter allowance : ");
	scanf("%d",&A);
	printf("enter Medical Insurance : ");
	scanf("%d",&I);
	G=B+A+I;
	printf("Gross salary =%d",G);
}
