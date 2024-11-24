#include<stdio.h>
int main()
{
	int n=1,num,sum;
	printf("Enter number of terms : ");
	scanf("%d",&num);
	while (n<=num)
	{
		sum+=n;
		printf("%d\t",n*n);
		n+=1;
	}
}

