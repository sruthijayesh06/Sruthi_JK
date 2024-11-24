#include<stdio.h>
int main()
{	int CM,M,P,C,E;
	printf("Maths mark out of 200 : ");
	scanf("%d",&M);
	printf("Physics mark out of 200 : ");
	scanf("%d",&P);
	printf("Chemistry mark out of 200 : ");
	scanf("%d",&C);
	printf("English mark out of 200 : ");
	scanf("%d",&E);
	CM=M/2+P/2+C/2+E;
	printf("Cutoff marks : %d",CM);
}
	
