#include <stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    int factorial,sum=0;
    for(int j=1;j<=m;j++)
    {
        factorial=1;
        for(int i = 1 ; i <= j ; i++)
            factorial*=i;
        sum += (j/factorial);
        if(j!=m)
            printf("%d/%d! + ",j,j);
        else
            printf("%d/%d! = ",j,j);
    }
    printf("%d",sum);
    return 0;
}
