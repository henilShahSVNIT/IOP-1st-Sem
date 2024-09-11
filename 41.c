#include <stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    for(int j=1;j<=m;j++)
    {
        if(m%j == 0)
            printf("%d, ",j);
    }
    
    return 0;
}