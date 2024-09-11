#include <stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    int factors = 2;
    for(int j=2;j<m;j++)
    {
        if(m%j == 0)
        {
            printf("it is composite");
            factors++;
            break;
        }
    }
    if(factors == 2)
       printf("it is prime"); 
    return 0;
}