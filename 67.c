#include <stdio.h>

int main() 
{
    int matrix1[3][3], matrix2[3][3], diff[3][3];

    printf("Enter the elements of the first 3x3 matrix\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &matrix1[i][j]);

    printf("Enter the elements of the second 3x3 matrix\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &matrix2[i][j]);

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            diff[i][j] = matrix1[i][j] - matrix2[i][j];

    printf("Difference of the two matrices\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", diff[i][j]);
        printf("\n");
    }

    return 0;
}
