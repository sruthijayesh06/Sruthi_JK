#include<stdio.h>
#include<math.h>
void main(){
	int N,M,j,i;
	printf("Enter the number of jars and operations respectively : ");
	scanf("%d  %d",&N,&M);
	int jar[N];
	for (i=0;i<N;i++)
	{
		jar[i]=0;
	}
	int input,a,b,count=0;
	printf("Enter a,b and number of candies respectively :");
	for (i=0;i<M;i++)
	{
		scanf("%d%d%d",&a,&b,&input);
		for (j=a;j<b;j++)
		{
			jar[j]=jar[j]=input;
		}
	}
	float avg;
	int sum=0;
	for (i=0;i<N;i++)
	{
		sum+=jar[i];
	}
	avg=sum/N;
	printf("Total = %d, Average = %f",sum,avg );
}
