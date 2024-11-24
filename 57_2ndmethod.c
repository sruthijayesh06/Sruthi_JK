#include <stdio.h>
int main()
{
	int b,n,i=0,j,max_arr;
	printf("Enter no of digits : ");
	scanf("%d",&n);
	int arr[n];
	while (i<n)
	{
		printf("Enter the digit to be entered : ");
		scanf("%d",&arr[i]);
		i+=1;
	}
	int max=arr[0],sec=arr[0];
	j=0;
	while (j<n)
	{
		n=arr[j];
		if (n>smax)
		{
			smax=arr[j];
		}
		j+=1;
	}
	printf("The max is :%d \n",max);
