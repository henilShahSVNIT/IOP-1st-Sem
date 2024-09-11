#include <stdio.h>
int main()
{
    int units,price = 0;
    scanf("%d", units);
    if  (units<=200)
        price +=(units*0.5);
    else if (units<=400)
    {
        price+=100;
        price+=(units*0.65);
    }
    else if (units<=600)
    {
        price+=230;
        price+=(units*0.8);
    }
    else
    {
        price+=425;
        price+=(units*1.25);
    }
    printf("%d is the price of the given units is ",price);
    return 0;
}