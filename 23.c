include<stdio.h>
int main()
{
	int b,e;
	printf("enter base and exponential value : ");
	scanf("%d%d",&b,&e);
	int i=1;
	int P=1;
	while (i<=e)
	{
		P=P*b;
		i+=1;
	}
	printf("Value = %d",P);
}

