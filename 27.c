#include<stdio.h>
int main()
{
	int i=2,n,s;
	printf("Enter number : ");
	scanf("%d",&n);
	while (i<n)
	{
		if (n%i==0)
		{
			s=0;
			break;
		}
		else 
			s=1;
		i+=1;
	}
	if (n==0 || n==1)
	{
		printf("It is neither prime nor composite");
	} 
	if (n!=0 && n!=1)
	{
		if (s==0)
	{
		printf("It is not a prime number");
	}
	else
	{
		printf("It is a prime number");
	}
	}
}
