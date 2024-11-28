#include<stdio.h>
int main()
{
    int charCount =0,words=0,line=0;
    FILE *fptr;
    fptr =fopen("textFile.txt","r");
    char ch;
    fscanf(fptr,"%c",&ch);
    while(!feof(fptr))
    {
        charCount++;
        if(ch == ' ')
        {
            words++;
        }
        if(ch == '\n')
        {
            line++;
        }
        fscanf(fptr,"%c",&ch);
    }
    printf("%d is the character count, %d is the word count and %d is the line count.",charCount,words,line);
}
