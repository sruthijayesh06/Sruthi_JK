#include<stdio.h>
int main()
{
	int a;
	printf("Enter no to be checked : ");
	scanf("%d",&a);
	oddeven(a);
}
void oddeven(int a)
{
	if (a%2==0 )
		printf("It is an even number");
	else 
		printf("It is an odd number");
}

