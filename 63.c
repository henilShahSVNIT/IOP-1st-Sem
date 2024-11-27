#include <stdio.h>

int main() 
{
    int matrix[3][3];
    int max, min;

    printf("Enter the elements of the 3x3 matrix\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &matrix[i][j]);

    max = min = matrix[0][0];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) 
        {
            if (matrix[i][j] > max) 
                max = matrix[i][j];
            if (matrix[i][j] < min) 
                min = matrix[i][j];
        }
    }

    printf("Max Element: %d\n", max);
    printf("Min Element: %d\n", min);

    return 0;
}
