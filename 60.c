#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int trash , min;
    for(int i=0;i<n;i++)
    {
        min = i;
        //sorting array in ascending order
        for(int j = i+1 ; j < n ; j++)
        {
            if(a[min] > a[j])
                min  = j;
        }
        trash = a[i]; 
        a[i] = a[min]; 
        a[min] = trash;
    }
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}