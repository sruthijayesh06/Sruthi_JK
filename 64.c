#include<stdio.h>
int main()
{
	int arr[3][3],i,j,max,min,sum;
	printf("Enter the matrix A elements : ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			sum+=arr[i][j];
		}
		printf("Sum of %d'th row = %d \n",i,sum);	}
}
