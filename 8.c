#include<stdio.h>
int main()
{	float h,m,d;
	float s=31558150;
	m=s/60;
	h=m/60;
	d=h/24;
	printf("minutes : %f",m);
	printf("Hours : %f",h);
	printf("Days : %f",d);
}
