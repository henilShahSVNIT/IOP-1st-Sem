//68) PROGRAM TO READ A 3*3 MATRIX AND MULTIPLY THEIR VALUE AND STORE THEM 
//IN THIRD MATRIX.

#include <stdio.h>

int main() 
{
    int matrix1[3][3], matrix2[3][3], result[3][3];
    int i, j, k;

    printf("Enter elements of 3x3 Matrix 1\n");
    for( i = 0; i < 3; i++ ) 
    {
        for( j = 0; j < 3; j++ )
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of 3x3 Matrix 2\n");
    for( i = 0; i < 3; i++ ) 
    {
        for( j = 0; j < 3; j++ ) 
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for( i = 0; i < 3; i++ ) 
    {
        for( j = 0; j < 3; j++ ) 
        {
            result[i][j] = 0;
            for( k = 0; k < 3; k++ ) 
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Resultant Matrix (after multiplication)\n");
    for( i = 0; i < 3; i++ ) 
    {
        for( j = 0; j < 3; j++ ) 
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
