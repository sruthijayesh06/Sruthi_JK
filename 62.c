#include<stdio.h>
int main()
{
	int arr[5], i, j=4;
	for(i=0;i<5;i++)
	{
		printf("Enter a value : ");
		scanf("%d",&arr[i]);
	}
	
	i=0;
	while (i<j)
	{
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i+=1;
		j-=1;
	}
	printf("Reversed array : \n ");
	for(i=0;i<5;i++)
	{
		printf("%d \n",arr[i]);
	}
}
