#include<stdio.h>
#include<string.h>
int main()
{
	char text[100];
	printf("Enter a line of text : ");
	fgets(text,sizeof(text),stdin);
	int length = findlength(text);
	printf("The length of the entered text is : %d",length);
	return 0;
}
void findlength(char str[])
{
	int length = 0;
	while (str[length]!='\0')
	{
		length++;
	}
	return length;
}
