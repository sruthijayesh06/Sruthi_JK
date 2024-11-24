#include<stdio.h>
int main()
{
	int n,i,j,fact;
	float sum=0;
	printf("enter no");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		fact=1;
		for(j=1;j<=i;j++)
		{
			fact*=j;
		}
		sum+=(i/fact);
		printf("%d/%d! + ",i,i);
	}
	printf("\nsum of series:%f\n",sum);
	return 0;
}
