#include<stdio.h>
int main()
{
	int n;
	printf("Enter no to be checked : ");
	scanf("%d",&n);
	prime(n);
}
void prime(int n)
{
	int i=2,s;
	while (i<n)
	{
		if (n%i==0)
			s=0;
		else 
			s=1;
		i+=1;
	}
	if (s==0)
	{
		printf("It is not a prime number");
	}
	else
	{
		printf("It is a prime number");
	}
}
