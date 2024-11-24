#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	float num;
	float sum,arr[50];
	printf("Enter the number to be checked : ");
	scanf("%f",&num );
	float a=0;
	float b=1;
	arr[0]=0;
	arr[1]=1;
	for ( i=2;i<=50;i++)
	{
		sum=a+b;
		a=b;
		b=sum;
		arr[i]=sum;
	}
	for (i=0;i<=50;i++)
	{
		if (arr[i]==num )
		{
			printf("It is a part of fibonacci series");
			break;
		}
		else
		{
			if (i==num)
			{
				printf("It is not a part of fibonacci series\n");
			}
		}
	}
}
