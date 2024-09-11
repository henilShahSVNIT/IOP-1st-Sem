#include <stdio.h>

int main()
{
    int a,b;
    char op;

    printf("enter two numbers you would like to operate upon! and Which operation would you like to perform? \n");
    scanf("%d %d %c",&a,&b,&op);
    
    float ans;

    switch(op)
    {
        case '+':
            ans = a+b;
            break;
        case '-':
            ans = a-b;
            break;
        case '*':
            ans = a*b;
            break;
        case '/':
            ans = a/b;
            break;
    }
    printf("\nthe result is %lf",ans);
	return 0;
}
