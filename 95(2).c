#include<stdio.h>
 struct employee{
	int empno;
	char empname[50];
	int pay;
};
int main()
{
	int emp[50], i, *ptr,n;
	printf("Enter the number of employees : ");
	scanf("%d",&n);
	struct employee empl[n];
	for (i=0;i<n;i++)
	{
		printf("Enter the employee no : ");
		scanf("%d",&empl[i].empno);
		printf("Enter the employee name : ");
		scanf("%s",&empl[i].empname);
		printf("Enter basic pay of the employee : ");
		scanf("%d",&empl[i].pay);
	}
	printf("\nEmployee Details : ");
	printf("\n=============================\n");
	printf("Emp no\t Emp Name Pay");
	printf("\n=============================\n");
	for (i=0;i<n;i++)
	{
		printf("%d\t %s\t %d\n",empl[i].empno,empl[i].empname,empl[i].pay);
	}
}
