#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],rev[100];
	char *aptr, *bptr;
	int len, i;
	printf("Enter a string : ");
	fgets(str,sizeof(str),stdin);
	len=strlen(str);
	aptr=str;
	bptr=rev;
	for (i=0;i<len;i++)
	{
		*(aptr+i)=*(bptr+(len-1));
	}
	printf("Reversed string is : %s",rev);
}
