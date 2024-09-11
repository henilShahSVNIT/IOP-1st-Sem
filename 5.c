#include <stdio.h>

int main()
{
	int a , b ,c;
    printf("enter value of a and b \n");
    scanf("%d %d" , &a , &b);
    c = a;
    a = b;
    b = c;

    printf("the value of a is %d",a);
    printf("\nthe value of b is %d",b);
	return 0;
}