#include<stdio.h>
int main()
{
	int a[3][3], temp,i,j;
	printf("Enter matrix elements :");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",a[j][i]);
		}
		printf("\n");
	}
}