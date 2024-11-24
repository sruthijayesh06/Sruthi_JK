#include<stdio.h>
int main()
{
	int a[3][3], b[3][3],sum[3][3],i,j;
	printf("Enter matrix A elements :");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter matrix B elements : ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n");
	printf("Sum of the matrices : \n");
	printf("\n");
	for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf("%d \t",sum[i][j]);
		}
		printf("\n");
	}
}
