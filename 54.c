#include<stdio.h>
int main()
{
	int i=0,arr[10],sum=0;
	while (i<10)
	{
		printf("enter no to be typed in array : ");
		scanf("%d",&arr[i]);
		sum+=arr[i];
		printf("sum =%d\n",sum);
		i+=1;
	}
	printf("Sum of numbers in array is : %d",sum);
	return 0;
}
