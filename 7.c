#include <stdio.h>

int main()
{
	int a , b ,c;
    printf("enter value of height and base of the triangle \n");
    scanf("%d %d" , &a , &b);
    c = (a*b) /2;

    printf("the value of area is %d",c);
    
	return 0;
}