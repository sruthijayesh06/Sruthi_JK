#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the charecter : ");
	scanf("%c",&ch);
	chckvowel(ch);
}
void chckvowel(ch)
{
	if (ch>='A'&&ch<= 'Z')
	{
		ch=ch+32;
	}
	if (ch == 'a'||ch=='e'||ch=='i'||ch=='0'||ch=='u')
	{
		printf("%c is a vowel",ch);
	}
	else
	{
		printf("%c is not a vowel",ch);
	}
}

