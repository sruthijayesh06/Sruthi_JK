#include<stdio.h>
int main()
{
	char str[100];
	char *sptr;
	int total=0;
	int space=0;
	int sum;
	printf("enter the string : ");
	fgets(str, sizeof(str),stdin);
	sptr=str;
	while (*sptr != '\0')
	{
		total++;
		if (*sptr == ' ')
		{
			space++;
		}
		sptr++;
	}
	printf("The length of the string is : %d",total);
	sum=total-space;
	printf("The length of string excluding space is : %d",sum);
}
