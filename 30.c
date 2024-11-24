#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
	int a,sum=0,d;
	printf("Enter number  : ");
	scanf("%d",&a);
	int dup=a;
	while (a>0)
	{
		d=a%10;
		sum=(sum*10)+d;
		a=a/10;
	}
	printf("The reverse is : %d",sum);
}
