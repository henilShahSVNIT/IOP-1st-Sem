//71) Program to find pivot point using binary search.

#include <stdio.h>

void outputarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

int main()
{
    printf("Enter the size of array\n");
    int p;
    scanf("%d",&p);
    int a[p];
    printf("Enter %d numbers one by one\n",p);
    for(int i=0;i<p;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number by which array has to be rotated\n");
    int n;
    scanf("%d",&n);
    printf("Given array is : \n");
    outputarray(a,p);
    printf("Rotated array is : \n");
    int temp;
    for(int i=0;i<n;i++)
    {
        int first=a[0];
        for(int j=0;j<p-1;j++)
        {
            a[j]=a[j+1];
        }
        a[p-1]=first;
    }
    outputarray(a,p);
    int start=0,end=p-1;
    int pivot;
    while(start < end)
    {
        if(a[start]<a[end])
        {
            pivot = start;
            break;
        }
        int mid=(start + end)/2;
        if(a[mid]>a[end])
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }
    }
    
    pivot = start;
    printf("The pivot index is %d \n",pivot);
    return 0;
}