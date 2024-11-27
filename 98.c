#include <stdio.h>
#include <stdlib.h>

// Function to allocate memory for a matrix
int* allocateMatrix(int rows, int cols) 
{
    return (int*)malloc(rows * cols * sizeof(int));
}

// Function to input elements of a matrix
void inputMatrix(int* matrix, int rows, int cols) 
{
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", (matrix + i * cols + j));
        }
    }
}

// Function to display a matrix
void displayMatrix(int* matrix, int rows, int cols) 
{
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("%d ", *(matrix + i * cols + j));
        }
        printf("\n");
    }
}

// Function to multiply two matrices
void multiplyMatrices(int* mat1, int* mat2, int* result, int rows1, int cols1, int cols2) 
{
    for (int i = 0; i < rows1; i++) 
    {
        for (int j = 0; j < cols2; j++) 
        {
            *(result + i * cols2 + j) = 0; // Initialize the cell
            for (int k = 0; k < cols1; k++) 
            {
                *(result + i * cols2 + j) += *(mat1 + i * cols1 + k) * *(mat2 + k * cols2 + j);
            }
        }
    }
}

int main() 
{
    int rows1, cols1, rows2, cols2;

    // Input dimensions of the first matrix
    printf("Enter rows and columns of the first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    // Input dimensions of the second matrix
    printf("Enter rows and columns of the second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    // Check if multiplication is possible
    if (cols1 != rows2) 
    {
        printf("Matrix multiplication not possible. Number of columns of the first matrix must equal the number of rows of the second matrix.\n");
        return 0;
    }

    // Allocate memory for the matrices
    int* mat1 = allocateMatrix(rows1, cols1);
    int* mat2 = allocateMatrix(rows2, cols2);
    int* result = allocateMatrix(rows1, cols2);

    // Input matrices
    printf("Enter elements of the first matrix:\n");
    inputMatrix(mat1, rows1, cols1);

    printf("Enter elements of the second matrix:\n");
    inputMatrix(mat2, rows2, cols2);

    // Display matrices
    printf("The first matrix is :\n");
    displayMatrix(mat1 , rows1 , cols1);
    printf("The second matrix is :\n");
    displayMatrix(mat2 , rows2 , cols2);

    // Multiply matrices
    multiplyMatrices(mat1, mat2, result, rows1, cols1, cols2);

    // Display result
    printf("Product of the matrices:\n");
    displayMatrix(result, rows1, cols2);

    // Free allocated memory
    free(mat1);
    free(mat2);
    free(result);

    return 0;
}
