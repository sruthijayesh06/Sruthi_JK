#include<stdio.h>
int main()
#include<stdlib.h>
{
	int luck,rand,i;
	printf("Enter your lucky number : ");
	scanf("%d",&luck);
	for(i=1;i<2;i++)
	{
		rand=rand();
		if(luck==rand)
		{
			printf("You've won!");
		}
		else
		{
			printf("Better luck next time");
		}
	}
	return 0;
}
