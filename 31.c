#include <stdio.h>

int main()
{
	int n,digit,sum=0;
    scanf("%d",&n);
    while(n>0)
    {
        digit = n%10;
        n-=digit;
        n/=10;
        sum += digit;
    }
    printf("%d",sum);
}