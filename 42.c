#include<stdio.h>
int main()
{
	int n,i,flag=0;
	printf("enter no to be checked : ");
	scanf("%d",&n);
	if (n<=1)
	{
		printf("%d is neither prime nor composite");
	}
	for (i=2;i<n;i++)
	{
		if (n%i==0)
		{
			flag=2;
			break;
		}
		if (flag==0)
		{
			printf("%d is prime no \n",n);
		}
		else 
		{
			printf("%d is the composite no\n ",n);
		}
	}
}
