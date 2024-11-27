#include <stdio.h>

int main()
{
    printf("Enter number of lines");
    int n;
    scanf("%d",&n);
    int spaces;
    for(int i = 1 ; i <= n ; i++)
    {
        spaces = n-i;
        for(int j = 0 ; j < spaces ; j++)
            printf(" ");
        for(int j = 0 ; j < i ; j++)
            printf("* ");
        printf("\n");
    }
}