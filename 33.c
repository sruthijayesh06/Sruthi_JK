#include<stdio.h>
int main()
{
	int n, num, max, min,i,j=0;
	printf("Enter number of terms : ");
	scanf("%d",&n);
	while (j<1)
	{
			printf("Enter number:");
			scanf("%d",&num);
			j+=1;
	}
	max=n;
	min=n;
	for (i=1;i<n;i++)
	{
		printf("Enter number : ");
		scanf("%d",&num);
		if (num>max)
		{
			max=num;
		}
		else if(num<min)
			min=num;
	}
	printf("The maximum number is : %d\n",max);
	printf("The minimum number is : %d",min);
	return 0;
	}
	
