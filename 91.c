//91) Square and Cube of Entered Number Using Pointers

#include <stdio.h>

void calculateSquareAndCube(int *num, int *square, int *cube) 
{
    *square = (*num) * (*num);
    *cube = (*num) * (*num) * (*num);
}

int main() 
{
    int num, square, cube;
    printf("Enter a number: ");
    scanf("%d", &num);

    calculateSquareAndCube(&num, &square, &cube);

    printf("Square: %d\n", square);
    printf("Cube: %d\n", cube);

    return 0;
}
