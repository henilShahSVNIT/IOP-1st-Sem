#include <stdio.h>
#include <math.h>

int flip(int num, int n) 
{
    int divisor = pow(10, n);
    int flippedPart = num % divisor;
    int remainingPart = num / divisor;

    int reversed = 0;
    while (flippedPart > 0) 
    {
        reversed = reversed * 10 + flippedPart % 10;
        flippedPart /= 10;
    }

    return remainingPart * divisor + reversed;
}

int main() 
{
    int num, n;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the number of digits to flip: ");
    scanf("%d", &n);

    printf("Result: %d\n", flip(num, n));
    return 0;
}
