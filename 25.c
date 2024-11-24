#include<stdio.h>
int main()
{
	int x,i=1,y;
	printf("Enter number : ");
	scanf("%d",&x);
	while (i<=10)
	{	y=x*i;
		printf("\n%d x %d = %d",x,i,y);
		i=i+1;
	}
}
	
	
