#include<math.h>
int main()
{
	int n,i,num,max=0,secondmax=0;
	printf("Enter number of charecters  : ");
	scanf("%d",&n);
	printf("Enter a number : ");
	scanf("%d",&num);
	max=num;
	for (i=1 ; i<n ; i++)
	{
		printf("Enter a number : ");
		scanf("%d",&num);
		if (num>max)
		{
			secondmax=max;
			max=num;
		}
		else if (num>secondmax)
		{
			secondmax=num;
		}
	}
	printf("The max no and second max is : %d %d",max,secondmax);
}
