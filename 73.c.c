#include<stdio.h>
int main()
{
    int candidatevotes[5];  
    int countspoiltballots = 0; 
    int i;
    for(i =0; i<5; i++)
    {
        candidatevotes[i] = 0;
    }
    
    for(i =0; i<5; i++)
    {  
        int n;
        printf("Enter the candidate number who you want to vote or press 0 to end the program: ");
        scanf("%d",&n);
        if(n == 0)
        break;
        if(n >=1 && n <=5)
        {
        candidatevotes[n-1]++;
        }
        if(n >5)
        {
            countspoiltballots++;
        }
    }

    printf("The votes of all candidates are listed below: \n");

    for(i =0; i <5; i++)
    {
        printf("The candidate %d has won %d votes\n",i+1,candidatevotes[i]); 
    }
    printf("%d number of spoilt ballots",countspoiltballots); 
    return 0;
}
