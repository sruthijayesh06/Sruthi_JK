#include<stdio.h>
int main()
{
	int i=1,n,sum_odd=0,sum_even;
	printf("enter value of n : ");
	scanf("%d",&n);
	while (i<=n)
	{	if (i%2==0)
		{	sum_even+=i;
		}
		else 
		{	sum_odd+=i;
		}
		i+=1;
	}
	printf("\nSum of even numbers = %d",sum_even);
	printf("\nSum of odd numbers = %d",sum_odd);
}
