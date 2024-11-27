#include <stdio.h>

int main()
{
    printf("Enter number of lines");
    int n;
    char c = 'A';
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
            printf("%c",c);
        printf("\n");
        c++;
    }
}