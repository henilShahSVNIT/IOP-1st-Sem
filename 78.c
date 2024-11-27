#include <stdio.h>

void armstrongornot(int n)
{
    int m;
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

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    armstrongornot(n);
    return 0;
}