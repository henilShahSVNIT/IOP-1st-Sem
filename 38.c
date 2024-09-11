#include <stdio.h>
int main()
{
    printf("Enter the number of elements you want of the square series\n");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d , ",i*i);
    }
    return 0;
}