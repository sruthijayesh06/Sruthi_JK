#include<stdio.h>
int main()
{	int h,m,s;
	printf("Enter no of seconds : ");
	scanf("%d",&s);
	m=s/60;
	h=m/60;
	printf("%d hours : %d minutes : %d seconds",h,m,s);
}
	
