#include <stdio.h>

void swap(int *a,int *b)
{
    *a = *a+*b;  //a=5 , b = 10 , a = 15
    *b = *a-*b;  //b=5
    *a = *a-*b; //a = 10
}

int main()
{
    int a,b;
    printf("Enter both numbers : ");
    scanf("%d %d",&a,&b);
    printf("Before swap a = %d and b = %d",a,b);
    swap(&a,&b);
    printf("\nAfter swap a = %d and b = %d",a,b);
    return 0;
}