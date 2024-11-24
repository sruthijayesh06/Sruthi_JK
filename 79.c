#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a and b : ");
	scanf("%d%d",&a,&b);
	exchange(a,b);
}
void exchange(int a,int b)
{
	int c,ss;
	c=a+b;
	a=c-a;
	b=c-a;
	printf("A : %d",a);
	printf("B : %d",b);
}
