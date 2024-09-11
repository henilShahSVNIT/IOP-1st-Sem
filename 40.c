#include <stdio.h>
#include <stdbool.h>
int main()
{
    int m;
    int sum=0;
    while(true)
    {
        scanf("%d",&m);
        if(m<0)
            break;
        sum+=m; //this is for not adding the negative number to the sum
        //if we wanted to add the negative number too, then the "sum+=m;" line would be above the if statement
    }
    
    printf("%d",sum);
    return 0;
}