#include <stdio.h>

int main()
{
	int a,b,c,sum;
    printf("enter your basic salary, HRA and other allowances \n");
    scanf("%d %d %d", &a ,&b ,&c);
    sum = a + b + c;
    printf("Your gross salary is %d",sum);
}