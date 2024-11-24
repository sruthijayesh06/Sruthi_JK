#include<stdio.h>
int main()
{
	int i,j,k,n;
	for(i=1;i<=5;i++)
	{
		for(j=0;j<=5-i;j++)
		{
			printf(" ");
		}
		for (k=1;k<=i;k++)
		{
			printf("%d",k);
		}
	printf("\n");
	}
}
