#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a and b : ");
	scanf("%d%d",&a,&b);
	printf("vale of a and b:%d%d",a,b);
	c=a+b;
	a=c-a;
	b=c-a;
	printf("A : %d",a);
	printf("B : %d",b);
}
