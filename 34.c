#include<stdio.h>
int main()
{
	int n,a,b,i;
	printf("Enter number of terms : ");
	scanf("%d",&n);
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
