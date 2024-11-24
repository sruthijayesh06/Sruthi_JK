#include<stdio.h>
int main()
{
	int i,j,a[10],b[10];
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
	for (i=0;i<10;i++)
	{
		int temp=a[i];
		a[i]=b[i];
		b[i]=temp;
	}
	printf("Swapped array A \n");
	for(i=0;i<10;i++)
	{
		printf("%d \n",a[i]);
	}
	printf("Swapped array B \n");
	for(i=0;i<10;i++)
	{
		printf("%d \n",b[i]);
	}
}
