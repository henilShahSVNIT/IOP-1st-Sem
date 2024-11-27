#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int temp;
    for(int i = n-1 ; i > 0 ; i--)
    {
        for(int j = 0;j < i;j++)
        {
            if(a[j+1]<a[j])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}