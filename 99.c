#include<stdio.h>
int main()
{
    FILE *fptr; 
    fptr = fopen("Text.txt","w");
    fprintf(fptr,"%s","Sruthi");
    fclose(fptr); 
    fptr = fopen("Text.txt","r");
    char string[100];
    fscanf(fptr,"%s",string); 
    puts(string);
    fclose(fptr);
    fptr = fopen("Text.txt","r");
    int vowelCount =0;
    char ch;
    fscanf(fptr,"%c",&ch);
    while( !feof(fptr))
    {
        switch(ch)
        {
            case 'a': 
            case 'e':
            case 'i':
            case 'o':
            case 'u':vowelCount++;
        }
    fscanf(fptr,"%c",&ch);
    }
    fclose(fptr);
    printf("%d",vowelCount);
return 0;

}
