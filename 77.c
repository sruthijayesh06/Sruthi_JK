#include<stdio.h>
int main()
{
	int i,sum,a,dup,d;
	printf("Enter no to be checked : ");
	scanf("%d",&a);
	palindrome(a);
}
void palindrome(int a){
	int dup=a,sum,i,d;
	while (a>0)
	{
		int d=a%10;
		int sum=(sum*10)+d;
		int i=i+1;
		a=a/10;
	}
	if (dup==sum)
	{
		printf("It is a palindrome number%d",sum);
	}
	else
	{
		printf("It is not a palindrome number%d",sum);
	}
}
