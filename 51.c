#include <stdio.h>

int main()
{
    printf("Enter number of lines");
    int n;
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= n ; j++)
        {
            if(j == i)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
}