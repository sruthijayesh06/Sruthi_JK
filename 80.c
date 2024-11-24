#include<stdio.h>
int main()
{
	int n;
	printf("Enter limit : ");
	scanf("%d",&n);
	fibonacci(n);
}
void fibonacci(int n)
{
	int a,b,i;
	printf("0	1");
    a=0;
	b=1;
	for ( i=3;i<=n;i++)
	{
		int sum=a+b;
		printf("\t%d",sum);
		a=b;
		b=sum;
	}
}
