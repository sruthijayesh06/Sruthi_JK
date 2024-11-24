#include<stdio.h>
int main()
{
	int num,sum=0;
	printf("enter the no:");
	while (1)
	{
		scanf("%d",&num);
		if (num<0)
		{
			break;
		}
		sum+=num;
	}
	printf("sum=%d\n",sum);
	return 0;
}
