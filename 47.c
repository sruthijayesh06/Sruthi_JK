#include<stdio.h>
int main()
{
	int i,j,c;
	for(i=1;i<=5;i++)
	{
		c=65;
		for (j=0;j<i;j++)
		{
			printf("%c",c);
			c+=1;
		}
		printf("\n");
	}
	return 0;
}
