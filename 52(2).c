//better method in comparison
#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=4;i++)
	{
		for (j=1;j<=4-i;j++)
		{
			printf(" ");
		}	
		for (k=1;k<=i;k++)
		{
			printf("%d",k);
		}
		for(j=i-1;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");	
	}

	return 0;
}
