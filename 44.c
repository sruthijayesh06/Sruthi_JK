#include<stdio.h>
int main()
{
	float amt, cons;
	printf("enter the consumption unit : ");
	scanf("%f",&cons);
	if (cons>=0 && cons<=200)
	{
		amt=0.5*cons;
	}
	else if (cons>210 && cons<=400)
	{
		amt=100+0.65*(cons-200);
	}
	else if (cons>=401 && cons<=600)
	{
		amt=230+0.8*(cons-400);
	}
	else 
	{
		amt=425+125*(cons-600);
	}
	printf ("The amount to be paid is :%f",amt);
	return 0;
}
