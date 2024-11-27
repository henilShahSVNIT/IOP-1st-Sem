#include <stdio.h>

void generateFibonacci(int n) 
{
    if (n <= 0) 
    {
        printf("Invalid input. N must be greater than 0.\n");
        return;
    }

    int first = 0, second = 1, next;

    printf("The first %d Fibonacci numbers are:\n", n);

    for (int i = 1; i <= n; i++) 
    {
        if (i == 1) 
        {
            printf("%d ", first);
        } 
        else if (i == 2) 
        {
            printf("%d ", second);
        } 
        else 
        {
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
    }
    printf("\n");
}

int main() 
{
    int n;
    
    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &n);

    generateFibonacci(n);

    return 0;
}
