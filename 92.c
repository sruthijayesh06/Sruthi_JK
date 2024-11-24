#include<stdio.h>
int main()
{
	int arr[100],*aptr, n,max,i,bignum;
	printf("Enter number of elements to be entered : ");
	scanf("%d",&n);
	aptr=arr;
	bignum=*aptr;
	for (i=1;i<=n;i++)
	{
		printf("Enter the element : ");
		scanf("%d",(aptr+i));
		if (arr[i]>bignum)
		{
			bignum=*(aptr+i);
		}
	}
	printf("The biggest element is : %d",bignum);
}
