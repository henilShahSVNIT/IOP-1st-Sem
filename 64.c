#include <stdio.h>

int main() 
{
    int matrix[3][3];
    int sum;

    printf("Enter the elements of the 3x3 matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            scanf("%d", &matrix[i][j]);
    }

    for (int i = 0; i < 3; i++) 
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
            sum += matrix[i][j];
        printf("Sum of row %d is %d\n", i + 1, sum);
    }

    return 0;
}
