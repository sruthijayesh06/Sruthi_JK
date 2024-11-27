#include<stdio.h>
int main()
{
    int students =10;
    int result[10][4];
    int i, j;
    for(i =0; i <students; i++)
    {
     printf("Enter the roll no. of student: ");
     scanf("%d",&result[i][0]); 

     printf("Enter marks of subject 1: ");
     scanf("%d",&result[i][1]);

     printf("Enter marks of subject 2: ");
     scanf("%d",&result[i][2]);

     printf("Enter marks of subject 3: ");
     scanf("%d",&result[i][3]);
     
    }
    printf("Roll No.\tSubject1\tSubject2\tSubject3");


    for(i =0; i <10; i++)
    {
        for(j =0; j <4; j++)
        {
            printf("%d\t\t",result[i][j]);
        }
        printf("\n");
    }


}
