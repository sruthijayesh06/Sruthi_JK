#include<stdio.h>
#include<math.h>
int main()
{
	int n, dup,d,sum;
	printf("Enter the number to be checked : ");
	scanf("%d",&n);
	dup=n;
	while (n!=0)
	{
		d=n%10;
		sum+=pow(d,3);
		n=n/10;	
		printf("%d",sum);
	}
	if (sum==dup)
	{
		printf("It is an armstrong number");
	}
	else
	{
		printf("It is not an armstrong no");
	}
}

