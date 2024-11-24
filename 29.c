//29 X
#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,sum,d;
	printf("Enter number to be checked : ");
	scanf("%d",&a);
	int dup=a;
	while (a>0)
	{
		d=a%10;
		sum=(sum*10)+d;
		a=a/10;
	}
	if (dup==sum)
	{
		printf("It is a palindrome number",sum);
	}
	else
	{
		printf("It is not a palindrome number",sum);
	}
}
