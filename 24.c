#include <stdio.h>

int main()
{
	int x,n;
    scanf("%d %d",&x,&n);
    if(n==1)
        printf("%d",1+x);
    else if(n==2)
        printf("%d",1+(x/2));
    else if(n==3)
        printf("%d",1+(x*x*x));
    else
        printf("%d",1+(x*n));
}