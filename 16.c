#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	printf("The numbers are :%d %d %d",a,b,c);
	if (a>b)
	{	if (a>c)
		{printf("The biggest no is : %d",a);
		}
	}
	if (b>c)
	{	if(b>a)
		{printf("The biggest no is : %d",b);
		}
	}
	else
	{	printf("The biggest no is : %d",c);
	}
}
