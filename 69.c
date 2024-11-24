#include<stdio.h>
int main()
{
	int no;
	int a[no],i,search;
	printf("Enter number of elements : ");
	scanf("%d",&no);
	while (i<no)
	{
		printf("enter element: ");
		scanf("%d",&a[i]);
		i++;
	}
	printf("Enter the number to be searched : ");
	scanf("%d",&search);
	for(i=0;i<no;i++)
	{
		if (a[i]==search)
		{
			printf("%d is present in the array \n");
		}
		if (i==no)
		{
			if(a[i]!=search)
		{
			printf("%d is not present in the array");
		}
		}
	}
}
