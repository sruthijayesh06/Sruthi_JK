#include<stdio.h>
int main()
{
	int y,x,n;
	printf("Enter value of n and x : ");
	scanf("%d%d",&n,&x);
	if (n==1)
	{	y=1+x;
		printf("Value = %d",y);
	}
	else if (n==2)
	{	y=1+(x/n);
		printf("Value = %d",y);
	}
	else if (n==3)
	{	y=1+(x*x*x);
		printf("Value = %d",y);
	}
	else 
	{	y=1+(n*x);
		printf("Value = %d",y);
	}
}
