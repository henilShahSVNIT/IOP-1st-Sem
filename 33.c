#include <stdio.h>

int main()
{
	int n,max=-2147483647,min=2147483647;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&n);
        if(n>max)
            max = n;
        if(n < min)
            min = n;
    }
    printf("the max number is %d and the min number is %d",max,min);
}