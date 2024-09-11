#include <stdio.h>

int main()
{
	int a , b;
    printf("enter value of a and b \n");
    scanf("%d %d" , &a , &b); 
    a = a+b;
    b = a-b; 
    a = a-b;

    printf("the value of a is %d",a);
    printf("\nthe value of b is %d",b);
	return 0;
}