#include <stdio.h>

int main()
{
	int n,m;
    scanf("%d",&n);
    m = n;
    int sum=0,digit;
    while(n>0)
    {
        digit = n%10;
        n-=digit;
        n/=10;
        sum += (digit*digit*digit);
    }
    if(sum == m)
        printf("YES");
    else
        printf("NO");
}