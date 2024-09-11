#include <stdio.h>
int main()
{
	int a,b,power=1;
    scanf("%d %d" , &a , &b);
    for(int i = 0 ; i < b ; i++)
        power*=a;
    printf("the value of a^b %d",power);
}