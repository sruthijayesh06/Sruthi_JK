#include<stdio.h>
int main()
{
	int arr[10],n,i,d=0,b=0,c=0;
	printf("enter numbers : \n");
	for(i=0;i<=10;i++)
	{
		scanf("%d",&arr[i]);
		if (arr[i]>0)
		{
			d+=1;
		}
		else if (arr[i]<0)
		{
			b+=1;
		}
		else
		{
			c+=1;
		}
	}
	printf("positive numbers : %d \n",d);
	printf("negative numbers : %d \n",b);
	printf("there are %d zero elements",c);
}
