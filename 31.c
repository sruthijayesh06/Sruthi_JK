#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
	int a,sum=0,d;
	printf("Enter number  : ");
	scanf("%d",&a);
	while (a>0){
		d=a%10;
		sum+=d;
		a=a/10;
	}
	printf("Sum of digits = %d",sum);
}
	
