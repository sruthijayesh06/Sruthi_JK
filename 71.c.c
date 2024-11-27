#include<stdio.h>
int main()
{
    int n, i, j; 
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n]; 
    for(i =0; i <n; i++)
    {
        printf("Enter the number: ");
        scanf("%d",&arr[i]);
    }

    for(j =0; j <n; j++)
    {
    for(i =j+1; i <n; i++)
    {
        if(arr[j]> arr[i])
        {
            int t= arr[i];
            arr[i] = arr[j];
            arr[j] = t;
        }
    }
    }


    for(i =0; i <n; i++)
    {
        printf("%d\n",arr[i]);
    }


    int N;
    printf("Enter the index by which you want to rotate the array: ");
    scanf("%d",&N);
    int arr1[n];
    for(i =0; i <n;i++)
    {
        arr1[i] = arr[(N+i)%n];

    }
    for(i =0; i <n; i++)
    {
        printf("%d\n",arr1[i]);
    }


    int elements = sizeof(arr1)/sizeof(arr[0]);


    int pivot;
    int start = 0;
    int end = elements;

    while(start <= end)
    {
     int mid = (start+end)/2;
     if(arr1[mid+1] < arr1[mid])
     {
        pivot = arr1[mid+1];
        break;

     }
     else
     {
        if(arr1[start] <= arr1[mid])
        {
            start = mid +1;

        }
        else
        {
            end = mid-1;
        }
     }
\
       
        
    }

    printf("%d is the pivot element",pivot); 


}
