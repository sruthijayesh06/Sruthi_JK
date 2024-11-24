#include<stdio.h>
int main()
{	char c;
	printf("Enter charecter : ");
	scanf("%c",&c);
	if (c>='A' && c<='Z')
	{	printf("It is a capital letter");
	}
	else if (c>='a' && c<='z')
	{	printf("It is a small letter");
	}
	else if (c>=0&&c<=10)
	{	printf("It is a number");
	}
	else
	{	printf("It is a special charecter");
	}
}
