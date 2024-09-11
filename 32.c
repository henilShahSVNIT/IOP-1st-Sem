#include <stdio.h>

int main()
{
	int n,t,max1=0,max2;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&t);
        if(t>max1)
        {
            max2 = max1;
            max1 = t;
        }
        else if(t>max2 && t<max1)
            max2 = t;
    }
    printf("the max number is %d and the second is %d",max1,max2);
}