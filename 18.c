#include <stdio.h>

int main()
{
    int a,b,c,result=0;
    printf("enter three numbers");
    scanf("%d %d %d",&a,&b,&c);
    result = (a>b && a>c)? a : result;
    result = (result==0 && b>a && b>c)? b : result;
    result = (result==0 && c>a && c>b)? c : result;
    printf("the maximum is %d",result);
	return 0;
}
