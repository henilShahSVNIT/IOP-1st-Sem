#include <stdio.h>

int factorial(int n) 
{
    int fact = 1;
    for (int i = 2; i <= n; i++) 
    {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r) 
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() 
{
    int n, r;
    printf("Enter values for n and r: ");
    scanf("%d %d", &n, &r);
    printf("nCr = %d\n", nCr(n, r));
    return 0;
}
