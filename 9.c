#include<stdio.h>
int main()
{	int h,m,d,s;
	printf("enter H : ");
	scanf("%d",&h);
	s=h*60*60;
	printf("seconds :%d",s);
	printf("enter M : ");
	scanf("%d",&m);
	s=m*60;
	printf("seconds : %d",s);
	printf("enter D : ");
	scanf("%d",&d);
	s=d*60*60*24;
	printf("seconds : %d",s);
}
	
	
	
	
	
	
