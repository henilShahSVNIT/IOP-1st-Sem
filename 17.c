#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter three numbers");
    scanf("%d %d %d",&a,&b,&c);
    if(a > b && a > c)
        printf("the max is %d",a);
    else if(b > a && b > c)
        printf("the max is %d",b);
    else 
        printf("the max is %d",c);
    
	return 0;
}
