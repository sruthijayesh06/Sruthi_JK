#include<stdio.h>
int main()
{
	int num,add,d,sum;
	printf("Enter the number : ");
	scanf("%d",&num);
	while (num>9)
	{
		sum=0;
		while(num>0)
		{
			d=num%10;
			sum+=d;
			num=num/10;
		}
		num=sum;
	}
	printf("The sum in single digits is : %d",num);
}
	
