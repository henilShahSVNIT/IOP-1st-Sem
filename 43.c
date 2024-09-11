#include <stdio.h>
int main()
{
    int sales,com = 0;
    scanf("%d",&sales);
    if(sales<=500)
        com += (sales*0.05);
    else if(sales<=2000)
    {
        com+=35;
        com+=(sales*0.10);
    }
    else if(sales<=5000)
    {
        com+=185;
        com+=(sales*0.12);
    }
    else
        com+=(sales*0.125);
    printf("%d is the commision of the given sale",com);
    return 0;
}