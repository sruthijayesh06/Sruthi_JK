#include<stdio.h>
int main()
{
	int no,num;
	int a[no],i,search;
	printf("Enter number of elements : ");
	scanf("%d",&no);
	while (i<no)
	{
		printf("enter element: ");
		scanf("%d",&a[i]);
		i++;
	}
	printf("Enter element to be searched for occurence : ");
	scanf("%d",&num);
	int j=0;
	for(i=0;i<10;i++)
	{
		if (a[i]==num)
		{
			j+=1;
		
		}
	}
	printf("numer of occurences of %d is : %d",num,j);
}
