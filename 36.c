#include<stdio.h>
int main()
{
	int n=1, num;
	printf("Enter number of terms : ");
	scanf("%d",&num);
	while (n<num)
	{
		if (n%2!=0)
		{
			printf("%d \t",n);
		}
		n+=1;
	}
}
