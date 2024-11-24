//******error********
#include<stdio.h>
int main()
{
	int arr[100],*aptr,arr2[100],*bptr;
	aptr=&arr;
	bptr=&arr2;
	int n,i;
	printf("Enter the no of elements to be entered itno the array : ");
	scanf("%d",&n);
	printf("Enter the elements to be entered into array 1 : ");
	for (i=0;i<n;i++)
	{
		scanf("%d",(aptr+i));
	}
	printf("The elements in the array are : ");
	for (i=0;i<n;i++)
	{
		printf("%d\n",*(aptr+i));
	}
	printf("\n");
	for (i=0;i<n;i++)
	{
		*(arr+i)=*(arr2+i);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(bptr+i));
	}
}
//note : *(arr+i)=arr[i]
