#include<stdio.h>
#include<string.h>
void swap (char *a, char *b)
{
    char t = *a;
    *a = *b;
    *b =t;
}
void permute(char *word,int left,int right)
{
	int i;
    if(left == right)
    {
        printf("%s ",word); 
    }
    else
    {
     for( i = left; i <= right; i++)
     {
        swap(word+left,word+i);
        permute(word, left+1,right);
        swap(word+i,word+left); 
     }
    }
}
int main()
{
    char word[]= "ABCD";
    int left =0,n =strlen(word);
    permute(word,0,n-1);
return 0;
}
