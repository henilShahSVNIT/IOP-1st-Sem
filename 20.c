#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter two numbers you would like to operate upon! \n");
    scanf("%d %d",&a,&b);
    printf("Which operation would you like to perform \nPress 1 for addition \nPress 2 for subtraction\nPress 3 for Multiplication\nPress 4 for Division\n");
    scanf("%d",&c);
    float ans;
    switch(c)
    {
        case 1:
            ans = a+b;
            break;
        case 2:
            ans = a-b;
            break;
        case 3:
            ans = a*b;
            break;
        case 4:
            ans = a/b;
            break;
    }
    printf("\nthe result is %lf",ans);
	return 0;
}
