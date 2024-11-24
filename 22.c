#include<stdio.h>
int main()
{ 	int n,fact;
	printf("Type N : ");
	scanf("%d",&n);
	int i=1;
	fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Factorial:%d",fact);
}
	
