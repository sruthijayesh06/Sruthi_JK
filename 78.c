#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("Enter no to be checked : ");
	scanf("%d",&n);
	armstrong(n);
}
void armstrong(int n)
{
	int dup,d,sum;
	dup=n;
	while (n!=0)
	{
		d=n%10;
		sum+=pow(d,3);
		n=n/10;	
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
