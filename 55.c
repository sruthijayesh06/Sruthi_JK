#include<stdio.h>
int main()
{
	int arr[10];
	int a=0, b=0,i;
	printf("enter numbers \n");
	for (i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		if (arr[i]%2 == 0)
		{
			a+=1;
		}
		else
			b+=1;
	}
	printf("no of odd no : %d \n",b);
	printf("even no : %d",a);
}
