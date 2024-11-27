#include <stdio.h>

void palindromeornot(int n)
{
    int ten = 1,digit,m,ans=0;
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

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    palindromeornot(n);
    return 0;
}