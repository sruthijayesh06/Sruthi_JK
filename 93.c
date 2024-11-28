#include<stdio.h>
#include<string.h>
int main()
{
    char string[100]; 
    printf("Enter the string: "); 
    gets(string);

    char *ptr = string; 
    int wordcount =0; 

    if(strcmp(string,"") != 0) 
    {

    while(*ptr != '\0')
    {
        if(*ptr == ' ' || *ptr == '\n' || *ptr == '\0')
        {
            wordcount++;
        }
        ptr++;
    }
            wordcount++;
    }
    printf("%d",wordcount);
    return 0;
}
