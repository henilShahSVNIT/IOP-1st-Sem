#include <stdio.h>

int main() 
{
    int N, M;
    scanf("%d %d", &N, &M);
    
    long long totalCandies = 0;
    for (int i = 0; i < M; i++) 
    {
        int a, b, k;
        scanf("%d %d %d", &a, &b, &k);
        totalCandies += (long long)(b - a + 1) * k;
    }
    
    printf("%lld\n", totalCandies / N);
    return 0;
}
