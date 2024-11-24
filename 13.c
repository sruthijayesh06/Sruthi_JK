#include<stdio.h>
int main()
{
	int X;
	printf("Enter no :");
	scanf("%d",&X);
	{
		if (X%2==0)
			printf("%d is an even no",X);
		else
			printf("%d is an odd no",X);
	}
}
