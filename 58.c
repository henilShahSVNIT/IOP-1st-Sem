#include <stdio.h>

int main()
{
    int a1[10],a2[10],a3[10];
    for(int i = 0 ; i < 10 ; i++)
        scanf("%d",&a1[i]);
    for(int i = 0 ; i < 10 ; i++)
    {
        scanf("%d",&a2[i]);
        a3[i] = a1[i] + a2[i];
    }

    for(int i=0;i<10;i++)
        printf("%d",a3[i]);
    
}