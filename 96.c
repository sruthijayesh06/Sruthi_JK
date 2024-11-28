#include<stdio.h>
#include<string.h>
int main()
{   int N =6, i, j;
    char str[6][100];
    strcpy(str[0],"Akshaya");
    strcpy(str[1],"Sruthi");
    strcpy(str[2],"Joann");
    strcpy(str[3],"Manasa");
    strcpy(str[4],"Keerthana");
    strcpy(str[5],"Renny");
    char *ptr[5];
    char *temp;
    for(i =0; i <N; i++)
    {
        ptr[i] = str[i];
    }
    for(i =0; i < N; i++)
    {
        for(j =i+1; j <N; j++)
        {
            if(strcmp(ptr[i],ptr[j])>0)
            {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
    printf("The name is ascending order : \n");
    for(i =0; i <N; i++)
    {
        puts(ptr[i]);
    }
return 0;
}
