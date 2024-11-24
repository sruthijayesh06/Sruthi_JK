#include<stdio.h>
int main()
{
	int *aptr, a,sq,cube;
	printf("Enter the number : ");
	scanf("%d",&a);
	aptr=&a;
	sq=*aptr * *aptr;
	cube=sq * *aptr;
	printf("The square and cube are : %d  %d",sq,cube);
}
