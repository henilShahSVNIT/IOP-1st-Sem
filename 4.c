#include <stdio.h>

int main()
{
	int a,ans;
    printf("enter the temperature you want to convert from farenheit to centigrade degrees \n");
    scanf("%d", &a);
    ans = (a -32)*5;
    ans /= 9;
    printf("the temperature is %d", ans );
    printf(" degree centigrade");
}