#include<stdio.h>
int main()
{
    int n,i ;
    printf("Enter the value of index of array:");
    scanf("%d",&n);
    int arr[n] ;
    int arr1[n];
    for(i =0; i <n; i++)
    {
        printf("Enter the number: ");
        scanf("%d",&arr[i]);
    }
    int k=1;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    for(i =0; i <n; i++)
    {
        arr1[i] = arr[(k+i)%n];
    }
    for(i =0; i<n; i++)
    {
        printf("%d ",arr1[i]);
    }
}
