#include <stdio.h>
int main()
{
    printf("Enter the odd number upto which you want the series\n");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2 != 0)
            printf("%d , ",i);
    }
    return 0;
}