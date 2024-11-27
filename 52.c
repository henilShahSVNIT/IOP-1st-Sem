#include <stdio.h>

int main()
{
    printf("Enter number of lines");
    int n;
    scanf("%d",&n);
    int spaces = n;
    for(int i = 1 ; i <= n ; i++)
    {
        spaces--;
        for(int j=0; j < spaces ; j++)
            printf(" ");
        for(int j=1;j<=i;j++)
            printf("%d",j);
        for(int j=i-1;j>0;j--)
            printf("%d",j);
        printf("\n");
    }
}