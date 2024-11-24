#include<stdio.h>
void main()
{
	int T,ori,count=0,num,rem,i;
	printf("Enter the value of T : ");
	scanf("%d",&T);
	for (i=1;i<=T;i++)
	{
		int num;
		printf("\n Enter the number : ");
		scanf("%d",&num);
		ori=num;
		while (num!=0)
		{
			rem=num%10;
			if (ori%rem==0)
			{
				count+=1;
			}
			num/=10;
		}
		printf("\n %d",count);
	}
}
