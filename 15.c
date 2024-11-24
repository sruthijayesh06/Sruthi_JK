#include<stdio.h>
int main()
{
	int M1,M2,M3,M4,M5,T;
	printf("enter marks: ");
	scanf("%d%d%d%d%d",&M1,&M2,&M3,&M4,&M5);
	T=(M1+M2+M3+M4+M5)/5;
	printf("Total=%d",T);
	if (T>90&&T<=100)
	{printf("Grade A ");
	}
	else if (T>80&&T<=90)
	{printf("Grade B");
	}
	else if(T>70&&T<=80)
	{printf("Grade C");
	}
	else if(T>50&&T<=70)
	{printf("Grade D");
	}
	else
	{printf("Grade Invalid");
	}
}
	

