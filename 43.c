#include<stdio.h>
int main()
{
	int sales, comm;
	printf("enter sales amt : ");
	scanf("%f",&sales);
	if(sales<=500)
	{
		comm=0.05*sales;
	}
	else if (sales>500 && sales<=2000)
	{
		comm=35+(sales-2000*0.12);
	}
	else 
	{
		comm=0.125*sales;
	}
	printf("the commission amount : %f",comm);
}
