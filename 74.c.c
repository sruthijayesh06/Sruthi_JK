#include<stdio.h>
int main()
{  
    int a, b, i, j;
    printf("Enter the index for array 1: ");
    scanf("%d",&a);
    printf("Enter the index for array 2: ");
    scanf("%d",&b);
    int arr1[a];
    int arr2[b];
    for(i =0; i <a; i++)
    {   printf("Enter number:");
        scanf("%d",&arr1[i]);
    }
    for(i =0; i <b; i++)
    {
        printf("Enter number: ");
        scanf("%d",&arr2[i]);
    }
    for(i =0; i <a; i ++)
    {
        for(j =i+1; j<a;j++ )
        {
            if(arr1[i] > arr1[j])
            {
                int t = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = t;
            }
        }
    }
    for(i =0; i <b; i ++)
    {
        for(j =i+1; j<b;j++ )
        {
            if(arr2[i] > arr2[j])
            {
                int t = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = t;
            }
        }
    }
    int arr3[a+b];
    for(i =0; i <a; i++)
    {
        arr3[i] = arr1[i];
    }
    for(i = a; i <a+b; i++)
    {
        arr3[i] = arr2[a+b-i-1];
    }
    for(i =0; i <a+b; i ++)
    {
        for(j =i+1; j<a+b;j++ )
        {
            if(arr3[i] > arr3[j])
            {
                int t = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = t;
            }
        }
    }
    for(i =0; i <a+b; i++)
    {
         printf("%d ",arr3[i]);
    }
}

