#include <stdio.h>

#define BIGGEST(a, b) ((a) > (b) ? (a) : (b))

int main() 
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("The biggest number is: %d\n", BIGGEST(num1, num2));
    return 0;
}
