#include <stdio.h>

int main()
{
	int n,ten = 1,digit,m,ans=0;
    scanf("%d",&n);
    m = n;
    while(n>0)
    {
        digit = n%10;
        n-=digit;
        n/=10;
        ten*=10;
    }
    n = m;
    while(n>0)
    {
        digit = n%10;
        n-=digit;
        n/=10;
        ten/=10;
        ans+=(digit*ten);
    }
    if(ans == m)
        printf("YES");
    else
        printf("NO");
}