#include <stdio.h>

int main()
{
	int a,b,c,d,f;
    float sum;
    printf("enter your marks in each subject \n");
    scanf("%d %d %d %d %d", &a ,&b ,&c,&d,&f);
    sum = a + b + c + d +f;
    sum /= 100;
    if(sum >= 90)
        printf("Divsion A");
    else if(sum >= 80)
        printf("Dvision B");
    else if(sum >= 70)
        printf("Division C");
    else if(sum >= 60)
        printf("Division D");
    else 
        printf("Division F");
    
}