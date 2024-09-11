#include <stdio.h>

int main()
{
	int p,r,t ,si;
    printf("enter principal, rate of interest and time \n");
    scanf("%d %d %d" , &p , &r , &t);
    si = p*r*t;
    si /= 100;
    printf("the simple interest is %d",si);
	return 0;
}