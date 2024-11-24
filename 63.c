#include<stdio.h>
int main()
{
	int arr[3][3],i,j,max,min;
	printf("Enter the matrix A elements : ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	min=arr[0][0];
	max=arr[0][0];
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if (arr[i][j]>max)
			{
				max=arr[i][j];
			}
			else if (arr[i][j]<min)
			{
				min=arr[i][j];
			}
		}
	}
	printf("Minimum = %d",min);
	printf("Maximum = %d",max);
}
