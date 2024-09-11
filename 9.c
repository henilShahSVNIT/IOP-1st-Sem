#include <stdio.h>

int main()
{
	int a , b ,c ,ans = 0;
    printf("enter number of hours minutes and seconds \n");
    scanf("%d %d %d" , &a , &b , &c);
    ans += (a*3600);
    ans += (b*60);
    ans += c;

    printf("the value of total time is %d",ans);
    
	return 0;
}