#include<stdio.h>
int main()
{
	int i,j,k,l, a[10],b[10],sum[10];
	printf("Enter numbers to be entered in first array \n ");
	for (i=0;i<10;i++)
	{
		printf("Enter : ");
		scanf("%d",&a[i]);
	}
	printf("Enter numbers to be entered in second array");
	for(j=0;j<10;j++)
	{
		printf("Enter : ");
		scanf("%d",&b[j]);
	}
	printf("\n");
	printf("sum of numbers in array is : \n");
	printf("\n");
	for (k=0;k<10;k++)
	{
		sum[k]=a[k]+b[k];
		printf("%d \n",sum[k]);
	}
	
}
