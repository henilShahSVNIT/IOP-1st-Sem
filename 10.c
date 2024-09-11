#include <stdio.h>

int main()
{
	int a,b,c,d,cm;
    printf("enter your marks in mathematics physics chemistry and entrance exam \n");
    scanf("%d %d %d %d", &a ,&b ,&c,&d);
    cm = (a/2) + (b/2) + (c/2) + d;
    printf("The cut off marks are %d",cm);
}