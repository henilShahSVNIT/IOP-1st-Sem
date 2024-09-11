#include <stdio.h>

int main()
{
	int a,b,c,d,f,sum;
    printf("enter your marks in each subject \n");
    scanf("%d %d %d %d %d", &a ,&b ,&c,&d,&f);
    sum = a + b + c + d +f;
    printf("The total marks are %d",sum);
}