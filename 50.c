#include<stdio.h>
int main()
{
	int j,i,c=65;
	for (i=1;i<=5;i++)
	{
		for (j=1;j<=i;j++)
		{
			printf("%c",c);
		}
		c+=1;
		printf("\n");
	}
}
	
