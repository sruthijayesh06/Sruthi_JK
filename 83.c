#include<stdio.h>
int main()
{
	int n;
	printf("Enter no of digits : ");
	scanf("%d",&n);
	int arr[n];
	maxarr();
}
void maxarr()
{
	int b,n,i=0,j,max_arr;
	while (i<n)
	{
		printf("Enter the digit to be entered : ");
		scanf("%d",&arr[i]);
		i+=1;
	}
}

