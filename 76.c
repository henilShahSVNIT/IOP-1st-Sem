#include <stdio.h>

void evenorodd(int n)
{
    if(n % 2 == 0)
        printf("The number is EVEN");
    else
        printf("The number is ODD");
}

int main()
{
    int n;
    printf("Input the number.");
    scanf("%d",&n);
    evenorodd(n);
    return 0; 
}